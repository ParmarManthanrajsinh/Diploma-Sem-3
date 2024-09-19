# Write a program that defines a function (shuffle) to scramble a list into a random 
# order, like shuffling a deck of cards.

import random

def shuffle_list(List):
    random.shuffle(List)
    return List

numbers = [1, 2, 3, 4, 5, 6]
print(shuffle_list(numbers))