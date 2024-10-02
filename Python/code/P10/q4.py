# Write  a  program  that  checks  whether  two  words  are  anagrams,  Two  words  are 
# anagrams  if  they  contain  the  same  letters.  For  example,  silent  and  listen  are anagrams.

def are_anagrams(word1, word2):

    word1 = word1.replace(" ", "").lower()
    word2 = word2.replace(" ", "").lower()
    return sorted(word1) == sorted(word2)

word1 = input("Enter the first word: ")
word2 = input("Enter the second word: ")

if are_anagrams(word1, word2):
    print(f'"{word1}" and "{word2}" are anagrams.')
else:
    print(f'"{word1}" and "{word2}" are not anagrams.')
