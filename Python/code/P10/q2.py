# Write a program to read a string containing letters, each of which may be in either
# uppercase  or  lowercase,  and return  a  tuple  containing the  number  of  vowels  and
# consonants in the string.

str = input("Enter a string: ")
str = str.lower()

vowels = []
consonants = []

for s in range(len(str)):
    if str[s] in ["a", "e", "i", "o", "u"]:
        vowels.append(str[s])
    else:
        consonants.append(str[s])

print("Number  of  vowels:  ", vowels)
print("Number of consonants: ", consonants)
