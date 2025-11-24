import random
import numpy as np
import matplotlib.pyplot as plt

in_history = []
patterns = {}
probability = [1/3,1/3,1/3] # R,P,S
P_Wins = 0
C_Wins = 0
Draws = 0

def take_input():
    while (True):
        op = input("Enter Your Option [R : Rock; P : Paper; S : Scissors; 69 : Exit]: ")
    
        if op == '69':
            return False
        else:
            if (op == 'R' or op == 'P' or op == 'S'):
                in_history.append(op)
                return True
            else:
                print("Invalid Input")

def add_pattern(key,Z):
    key1 = ''.join(key)

    if key1 in patterns:
        patterns[key1].append(Z)
    else:
        patterns[key1] = [Z]

def update_pattern():
    N = len(in_history)
    
    for i in range(N-1):
        for length in range(1,N - i + 1):
            key = ''.join(in_history[i: i + length])
            if i + length < N:
                Z = in_history[i + length]
                add_pattern(key,Z)

def cal_probability(key):
    lst = patterns[key]
    total = len(lst)

    probability[0] = lst.count('R') / total
    probability[1] = lst.count('P') / total
    probability[2] = lst.count('S') / total

def check_pattern():
    key = ''.join(in_history)

    while key != "":
        if key in patterns:
            return key
        else:
            key = key[1:]
    return None
    
def choose_ans():
    sorted_probs = sorted(probability, reverse=True)
    best = sorted_probs[0]
    second = sorted_probs[1]

    if best - second < 0.15:
        return np.random.choice(['R', 'P', 'S'], p=probability)
    else:
        max_index = probability.index(best)
        return ['R', 'P', 'S'][max_index]

def pridict_ans():
    if len(in_history) < 2:
        random.choice(['R','P','S'])

    key = check_pattern()
    if key != None:
        cal_probability(key)
        return choose_ans()
    else:
        return random.choice(['R','P','S'])

def return_ans():
    op = pridict_ans()

    if op == 'R': out = 'P'
    elif op == 'P': out = 'S'
    else: out = 'R'

    update_pattern()
    return out

def check_ans(op,out,data):
    if op == 'R':
        if out == 'R':
            Draws += 1
            data.append(0.5)
        elif out == 'P':
            C_Wins += 1
            data.append(1)
        else:
            P_Wins += 1
            data.append(0)
    
    elif op == 'P':
        if out == 'R':
            P_Wins += 1
            data.append(0)
        elif out == 'P':
            Draws += 1
            data.append(0.5)
        else:
            C_Wins += 1
            data.append(1)
    
    else:
        if out == 'R':
            C_Wins += 1
            data.append(1)
        elif out == 'P':
            P_Wins += 1
            data.append(0)
        else:
            Draws += 1
            data.append(0.5)
    
    return data

def draw_graph(score):
    cumulative_score = []
    total = 0
    turns = []

    for i,s in enumerate(score):
        total += s
        cumulative_score.append(total / (i+1))
        turns.append(i+1)
    
    plt.plot(turns,cumulative_score,marker='o')
    plt.xlabel('Rounds')
    plt.ylabel('Cumulative Win Rate of Computer')
    plt.title('AI Performance Overtime')
    plt.ylim(0,1)
    plt.grid(True)
    plt.show()

def write_to_file():
    with open(r'C:\Users\Hajra Hai\Desktop\log.txt','a') as f:
        f.write(f'R : {round(probability[0],3)}; P : {round(probability[1],3)}; S : {round(probability[2],3)} \n')


def main():
        print("Adaptive Rock-Paper-Scissors")

        with open(r'C:\Users\Hajra Hai\Desktop\log.txt','w') as f: pass # resetting the file

        score = []   # 1: Win, 0: Lose, 0.5: Draw in terms of computer

        while True:
            op = take_input()

            if op:
                out = return_ans()
                print(f"Computer Plays: {out}")
                score = check_ans(score,out,score)
                write_to_file()

            else:
                print("Showing graph")
                draw_graph(score)
                print("Exiting")
                return

main()