# Write a program that reads a text file and displays all the numbers found in the file.

file = open("Python/code/P11/text.txt","r")
no_list = []

for line in file.readlines():
    for ch in line:
        if ch.isnumeric():
            no_list.append(int(ch))

print("numbers found in the file are: ",no_list)
            