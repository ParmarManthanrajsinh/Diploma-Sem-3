# Write  an  automated  censor  program that  reads the text from  a file  and  creates a
# new file where all of the four-letter words have been replaced by “****”. You can
# ignore punctuation, and you may assume that no  words in the file are split across
# multiple lines.

file = open("Python/code/P11/text.txt", "r")
content = file.read()
file.close()

words = content.split()
censor_words = []

for word in words:
    if len(word) == 4:
        censor_words.append(word)

for word in censor_words:
    content = content.replace(word, "****")

new_file = open("Python/code/P11/censored_text.txt", "w")
new_file.write(content)
new_file.close()
