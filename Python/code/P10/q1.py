# Write a program to check whether a given string is palindrome or not.

str = input("Enter a string: ")

rev = str[::-1]

if str == rev:
    print("The string is a palindrome.")
else:
    print("The string is not a palindrome.")
