# Write a program that plays the popular scissor-rock-paper game. (A scissor can cut
# a  paper,  a  rock  can  knock  a  scissor,  and  a  paper  can  wrap  a  rock.)  The  program
# randomly generates a number 0, 1, or 2 representing scissor, rock, and paper. The
# program  prompts  the  user  to  enter  a  number  0,  1,  or  2  and  displays  a  message
# indicating whether the user or the computer wins, loses, or draws.

import random

move = {1: "stone", 2: "paper", 3: "scissor"}

print("1. for stone")
print("2. for paper")
print("3. for scissor")
player = int(input("Enter your choice: "))

computer = random.choice([1, 2, 3])

if player <= 3:

    print("Player:", move[player], end=" vs ")
    print("Computer:", move[computer])

    if player == computer:
        print("Draw")
    elif (player == 1) and (computer == 2):
        print("Computer win")
    elif (player == 1) and (computer == 3):
        print("Player win")
    elif (player == 2) and (computer == 1):
        print("Player win")
    elif (player == 2) and (computer == 3):
        print("Computer win")
    elif (player == 3) and (computer == 1):
        print("Computer win")
    elif (player == 3) and (computer == 2):
        print("Player win")
else:
    print("invalid choice")
