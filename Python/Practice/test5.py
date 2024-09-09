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
