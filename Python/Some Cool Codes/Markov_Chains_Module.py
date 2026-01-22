import numpy as np
import random

class MarkovChains:
    def __init__(self,data:list,lvl=6):
        """
        Markov Chain-based sequence predictor.

        Made By: Muhammad Ibrahim
            https://github.com/Ibraheem5002/
        
        Parameters:
        -----------
        data : list
            List of possible outcome values
            Best case if all are of same data type

        lvl : int (optional)
            Maximum pattern length to track (n-gram order)
            Default value = 6
        """

        self.in_hist = []
        self.patterns = {}
        self.ops = data
        self.N = len(self.ops)
        self.probability = np.full(self.N,1/self.N)
        self.in_op = None
        self.out_op = None
        self.Level = lvl
    
    def _add_pattern(self,key,Z):
        if key in self.patterns:
            self.patterns[key].append(Z)
        else:
            self.patterns[key] = [Z]
    
    def _update_pattern(self):
        self.in_hist.append(self.in_op)

        for L in range(1,self.Level+1):
            if len(self.in_hist) >= L+1:
                key = tuple(self.in_hist[-(L+1):-1])
                Z = self.in_hist[-1]
                self._add_pattern(key,Z)
    
    def _normalize_prob(self):
        total = sum(self.probability)

        if total <= 0:
            self.probability = np.full(self.N,1/self.N)
        else:
            self.probability = self.probability / total
    
    def _cal_probability(self,key):
        lst = self.patterns[key]
        total = len(lst)

        if total > 0:
            for i in range(self.N):
                self.probability[i] = lst.count(self.ops[i]) / total
        else:
            self.probability = np.full(self.N,1/self.N)
        
        self._normalize_prob()
    
    def _choose_ans(self):
        sorted_prob = sorted(self.probability,reverse=True)
        best = sorted_prob[0]
        scnd = sorted_prob[1]

        if best-scnd > 0.15:
            max_idx = list(self.probability).index(best)
            return self.ops[max_idx]
        else:
            return np.random.choice(self.ops,p=self.probability)
    
    def _predict_ans(self):
        self.probability = np.full(self.N,1/self.N)
        probs = []
        pLen = []

        for L in range(self.Level,0,-1):
            if len(self.in_hist) < L:
                continue

            key = tuple(self.in_hist[-L:])

            if key in self.patterns:
                self._cal_probability(key)
                probs.append(self.probability.copy())
                pLen.append(len(self.patterns[key]))

        if len(probs) == 0:
            self.out_op = random.choice(self.ops)
        else:
            mx = -100000
            idx = -1

            for i in range(len(probs)):
                pMax = max(probs[i])
                score = pMax * pLen[i]

                if score > mx:
                    mx = score
                    idx = i
            
            self.probability = probs[idx]
            self.out_op = self._choose_ans()
    
    def predict(self,X):
        """
        Make prediction and update patterns.
        If first call, then output is total random
        
        Parameters:
        -----------
        X : any
            Observed input (must be in self.ops)
            
        Returns:
            Predicted next outcome
        """

        if X not in self.ops:
            raise ValueError(f"Input {X} is not in valid operations: {self.ops}")

        self.in_op = X
        self._predict_ans()
        self._update_pattern()
        return self.out_op
    
    def fit(self,lst:list):
        """
        Reset and fit new sequence of observed data
        All elements must be of given outcomes

        Parameters:
        -----------
        lst : List
            List of all observed input values
        """

        for i in range(len(lst)):
            if lst[i] not in self.ops:
                raise ValueError(f"Input {lst[i]} is not in valid operations: {self.ops}")

        self.reset()
        self.in_hist = lst
    
    def reset(self):
        """Reset the model to initial state"""
        self.in_hist = []
        self.patterns = {}
        self.probability = np.full(self.N,1/self.N)
        self.in_op = None
        self.out_op = None
