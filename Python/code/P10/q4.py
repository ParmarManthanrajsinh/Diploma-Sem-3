# Write  a  program  that  checks  whether  two  words  are  anagrams,  Two  words  are 
# anagrams  if  they  contain  the  same  letters.  For  example,  silent  and  listen  are 
# anagrams. 

str1 = input("Enter the first string: ")
str2 = input("Enter the second string: ")

str1 = str1.replace(" ","").lower()
str2 = str2.replace(" ","").lower()

if sorted(str1) == sorted(str2):
    print("The strings are anagrams")
else:
    print("The strings are not anagrams")