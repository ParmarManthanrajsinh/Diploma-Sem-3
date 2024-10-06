# Write a program to perform the below operations on files:
# ● Create a text file and write a string to it.
# ● Read an entire text file.
# ● Read a text file line by line.
# ● Write a string to a file.
# ● Write a list of strings to a file.
# ● Count the number of lines, words in a file.

file = open("Python/code/P11/text.txt", "w")
n = int(input("Enter a number of lines: "))
text_list = []

for i in range(n):
    str = input()
    text_list.append(str + "\n")

file.writelines(text_list)

file.close()

file = open("Python/code/P11/text.txt", "r")
word = 0

print("Content of file:")
for line in file.readlines():
    print(line, end="")
    for ch in line:
        if ch == " " or ch == "\n":
            word += 1


print("Number of lines in file:", n)
print("Number of words in file:", word)

file.close()
