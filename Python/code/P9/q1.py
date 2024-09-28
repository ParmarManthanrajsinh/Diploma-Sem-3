# Write a program that plays the popular scissor-rock-paper game. (A scissor can cut
# a  paper,  a  rock  can  knock  a  scissor,  and  a  paper  can  wrap  a  rock.)  The  program
# randomly generates a number 0, 1, or 2 representing scissor, rock, and paper. The
# program  prompts  the  user  to  enter  a  number  0,  1,  or  2  and  displays  a  message
# indicating whether the user or the computer wins, loses, or draws.

import random

print("0 for rock")
print("1 for scrissor")
print("2 for paper")

player = int(input("Enter your choise: "))
computer = random.randint(0, 2)

match player:
    case 0:
        print("rock vs ", end="")
    case 1:
        print("scissor vs ", end="")
    case 2:
        print("paper vs ", end="")
    case _:
        quit()
match computer:
    case 0:
        print("rock")
    case 1:
        print("scissor")
    case 2:
        print("paper")
    case _:
        quit()

if player == computer:
    print("Draw")
elif player == 0 and computer == 1:
    print("Player Win")
elif player == 0 and computer == 2:
    print("Computer Win")
elif player == 1 and computer == 0:
    print("Computer Win")
elif player == 1 and computer == 2:
    print("Player Win")
elif player == 2 and computer == 0:
    print("Player Win")
elif player == 2 and computer == 1:
    print("Computer Win")
