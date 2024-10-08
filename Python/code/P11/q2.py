# Write a program that reads a text file and counts the occurrences of each alphabet
# in the file. The program should prompt the user to enter the filename.

file_name = input("Enter file name: ")

file = open(f"Python/code/P11/{file_name}", "r")
char_list = ""

for line in file.readlines():
    for ch in line:
        if ch != "\n" and ch != ' ':
            char_list += ch

char_list = sorted(char_list)

count_key = 0
no_char_list = []
key = char_list[0]

for i in char_list:
    if i == key:
        count_key += 1   
    else:
        no_char_list.append([key, count_key])
        key = i
        count_key = 1

no_char_list.append([key, count_key])

print(no_char_list)
