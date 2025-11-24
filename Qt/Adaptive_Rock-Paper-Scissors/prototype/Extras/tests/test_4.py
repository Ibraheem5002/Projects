import random
import numpy as np
import matplotlib.pyplot as plt

in_history = []
patterns = {}
probability = [1/3,1/3,1/3] # R,P,S

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

def update_pattern():
    # storing 2 level pridictions
    if len(in_history) < 3:
        return
    
    X = in_history[-3]
    Y = in_history[-2]
    Z = in_history[-1]

    key = f'{X}{Y}'

    if key in patterns:
        patterns[key].append(Z)
    else:
        patterns[key] = [Z]

    # storing 3 level pridictions
    if len(in_history) < 4:
        return
    
    W = in_history[-4]

    key = f'{W}{X}{Y}'

    if key in patterns:
        patterns[key].append(Z)
    else:
        patterns[key] = [Z]

def level_2():
    if len(in_history) < 3:
        return False

    X = in_history[-2]
    Y = in_history[-1]
    key = f'{X}{Y}'

    if key in patterns:
        lst = patterns[key]
        total = len(lst)

        probability[0] = lst.count('R') / total
        probability[1] = lst.count('P') / total
        probability[2] = lst.count('S') / total

        return True
    else:
        return False

def level_3():
    if len(in_history) < 4:
        return False

    W = in_history[-3]
    X = in_history[-2]
    Y = in_history[-1]
    key = f'{W}{X}{Y}'

    if key in patterns:
        lst = patterns[key]
        total = len(lst)

        probability[0] = lst.count('R') / total
        probability[1] = lst.count('P') / total
        probability[2] = lst.count('S') / total

        return True
    else:
        return False
    
def hybrid_sys():
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
        return random.choice(['R','P','S'])

    if level_3() or level_2():
        return hybrid_sys()
        
    else:
        return random.choice(['R','P','S'])

def return_ans():
    op = pridict_ans()

    if op == 'R': out = 'P'
    elif op == 'P': out = 'S'
    else: out = 'R'

    update_pattern()
    return out

def cal_score(data, out):
    player = in_history[-1]
    
    if player == 'R':
        if out == 'R': data.append(0.5)
        elif out == 'P': data.append(0)
        else: data.append(1) # S

    elif player == 'P':
        if out == 'R': data.append(1)
        elif out == 'P': data.append(0.5)
        else: data.append(0) # S

    else:
        if out == 'R': data.append(0)
        elif out == 'P': data.append(1)
        else: data.append(0.5) # S

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

# ----------- MAIN ---------------

def main():
        print("Adaptive Rock-Paper-Scissors")

        with open(r'C:\Users\Hajra Hai\Desktop\log.txt','w') as f: pass # resetting the file

        score = []   # 1: Win, 0: Lose, 0.5: Draw in terms of computer

        while True:
            op = take_input()

            if op:
                out = return_ans()
                print(f"Computer Plays: {out}")
                score = cal_score(score,out)
                write_to_file()

            else:
                print("Showing graph")
                draw_graph(score)
                print("Exiting")
                return

main()