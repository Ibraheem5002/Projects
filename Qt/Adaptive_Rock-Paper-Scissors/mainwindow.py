# This Python file uses the following encoding: utf-8
import sys
import time
import random
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation as fani

from PySide6.QtWidgets import QApplication, QMainWindow, QLabel, QPushButton, QLCDNumber, QMessageBox
from PySide6.QtGui import QPixmap
from PySide6.QtCore import QTimer

import rc_resource
from ui_form import Ui_mainwindow

class mainwindow(QMainWindow):
    def __init__(self, parent=None):
        super().__init__(parent)
        self.ui = Ui_mainwindow()
        self.ui.setupUi(self)

        # variables
        self.in_history = []
        self.patterns = {}
        self.probability = [1/3,1/3,1/3]
        self.graph_Data = []
        self.in_op = None
        self.out_op = None
        self.P_Wins = 0
        self.C_Wins = 0
        self.Draws = 0
        self.is_Next_turn = True
        self.is_Button_Pressed = False
        self.turns = 0
        self.turns_lst = []
        self.total_score = 0
        self.cumulative_score = []
        self.fig, self.ax = plt.subplots()
        self.line, = self.ax.plot([], [], marker='o')
        plt.ion()
        plt.show()

        self.ui.rock_Button.clicked.connect(self.rock_Button_clicked)
        self.ui.paper_Button.clicked.connect(self.paper_Button_clicked)
        self.ui.scissors_Button.clicked.connect(self.scissors_Button_clicked)

        # setting up the initial ui

        self.ui.rock_Button_2.hide()
        self.ui.paper_Button_2.hide()
        self.ui.scissors_Button_2.hide()

        self.ui.C_Wins_Num.display(0)
        self.ui.P_Wins_Num.display(0)
        self.ui.Dr_Num.display(0)

    # ---------- programing buttons ---------------

    def rock_Button_clicked(self):
        if self.is_Next_turn == True:

            self.is_Next_turn = False
            self.is_Button_Pressed = True
            self.in_op = 'R'
            self.in_history.append(self.in_op)

            self.ui.paper_Button.hide()
            self.ui.scissors_Button.hide()

            self.turns += 1
            self.turns_lst.append(self.turns)
            self.main_program()

    def paper_Button_clicked(self):
        if self.is_Next_turn == True:

            self.is_Next_turn = False
            self.is_Button_Pressed = True
            self.in_op = 'P'
            self.in_history.append(self.in_op)

            self.ui.scissors_Button.hide()
            self.ui.rock_Button.hide()

            self.turns += 1
            self.turns_lst.append(self.turns)
            self.main_program()

    def scissors_Button_clicked(self):
        if self.is_Next_turn == True:

            self.is_Next_turn = False
            self.is_Button_Pressed = True
            self.in_op = 'S'
            self.in_history.append(self.in_op)

            self.ui.paper_Button.hide()
            self.ui.rock_Button.hide()

            self.turns += 1
            self.turns_lst.append(self.turns)
            self.main_program()


    # ------------ setting/resetting ui ---------

    def reset_ui(self):
        self.ui.rock_Button_2.hide()
        self.ui.paper_Button_2.hide()
        self.ui.scissors_Button_2.hide()

        self.ui.rock_Button.show()
        self.ui.paper_Button.show()
        self.ui.scissors_Button.show()

        self.in_op = None


    def set_ui(self):
        self.ui.P_Wins_Num.display(self.P_Wins)
        self.ui.C_Wins_Num.display(self.C_Wins)
        self.ui.Dr_Num.display(self.Draws)

        if self.out_op == 'R':
            self.ui.rock_Button_2.show()
        elif self.out_op == 'P':
            self.ui.paper_Button_2.show()
        else:
            self.ui.scissors_Button_2.show()

    # ----------- main program running ----------

    def main_program(self):
        if self.in_op != None and self.is_Button_Pressed == True:
                self.all_func()
                self.set_ui()
                QTimer.singleShot(2000,self.next_turn)

    def next_turn(self):
        self.is_Next_turn = True
        self.is_Button_Pressed = False
        self.reset_ui()
        self.update_graph()

    # -------------- main processing ------------

    def all_func(self):
        self.update_pattern()
        self.return_ans()
        self.check_ans()

    def add_pattern(self,key,Z):
        key1 = ''.join(key)

        if key1 in self.patterns:
            self.patterns[key1].append(Z)
        else:
            self.patterns[key1] = [Z]

    def update_pattern(self):
        N = len(self.in_history)

        for i in range(N-1):
            for length in range(1,N - i + 1):
                key = ''.join(self.in_history[i: i + length])
                if i + length < N:
                    Z = self.in_history[i + length]
                    self.add_pattern(key,Z)

    def cal_probability(self,key):
        lst = self.patterns[key]
        total = len(lst)

        self.probability[0] = lst.count('R') / total
        self.probability[1] = lst.count('P') / total
        self.probability[2] = lst.count('S') / total

    def check_pattern(self):
        key = ''.join(self.in_history)

        while key != "":
            if key in self.patterns:
                return key
            else:
                key = key[1:]
        return None

    def choose_ans(self):
        sorted_probs = sorted(self.probability, reverse=True)
        best = sorted_probs[0]
        second = sorted_probs[1]

        if best - second < 0.15:
                return np.random.choice(['R', 'P', 'S'], p=self.probability)
        else:
            max_index = self.probability.index(best)
            return ['R', 'P', 'S'][max_index]

    def pridict_ans(self):
        if len(self.in_history) < 2:
            return random.choice(['R','P','S'])

        key = self.check_pattern()

        if key != None:
            self.cal_probability(key)
            return self.choose_ans()
        else:
            return random.choice(['R','P','S'])

    def return_ans(self):
        op = self.pridict_ans()

        if op == 'R': self.out_op = 'P'
        elif op == 'P': self.out_op = 'S'
        else: self.out_op = 'R'

    def check_ans(self):
        if self.in_op == 'R':
            if self.out_op == 'R':
                self.Draws += 1
                self.total_score += 0.5
                self.cumulative_score.append(self.total_score / self.turns)

            elif self.out_op == 'P':
                self.C_Wins += 1
                self.total_score += 1
                self.cumulative_score.append(self.total_score / self.turns)

            else:
                self.P_Wins += 1
                self.total_score += 0
                self.cumulative_score.append(self.total_score / self.turns)

        elif self.in_op == 'P':
            if self.out_op == 'R':
                self.P_Wins += 1
                self.total_score += 0
                self.cumulative_score.append(self.total_score / self.turns)

            elif self.out_op == 'P':
                self.Draws += 1
                self.total_score += 0.5
                self.cumulative_score.append(self.total_score / self.turns)

            else:
                self.C_Wins += 1
                self.total_score += 1
                self.cumulative_score.append(self.total_score / self.turns)

        else:
            if self.out_op == 'R':
                self.C_Wins += 1
                self.total_score += 1
                self.cumulative_score.append(self.total_score / self.turns)

            elif self.out_op == 'P':
                self.P_Wins += 1
                self.total_score += 0
                self.cumulative_score.append(self.total_score / self.turns)

            else:
                self.Draws += 1
                self.total_score += 0.5
                self.cumulative_score.append(self.total_score / self.turns)

    # --------- drawing/updaing graph ---------------

    def update_graph(self):
        self.line.set_data(self.turns_lst, self.cumulative_score)
        self.ax.relim()
        self.ax.autoscale_view()
        self.fig.canvas.draw()
        self.fig.canvas.flush_events()

    # ---------------- exiting program --------------

    def closeEvent(self,event):
        response = QMessageBox.question(self,"Exit Program","Are you sure you want to exit program? Any saved progress will be lost. Any graphs opened will be closed.",QMessageBox.Yes | QMessageBox.No)
        if response == QMessageBox.Yes:
            plt.close('all')
            event.accept()
        else:
            event.ignore()

# ----------------- main ------------------

if __name__ == "__main__":
    app = QApplication(sys.argv)
    MW = mainwindow()
    MW.show()
    sys.exit(app.exec())









