f = open("Python/Practice/Hi-score.txt")
score = int(f.read())
f.close()

print("previous high score is: ", score)
i = str(input("Enter your score: "))

if score < int(i):
    h = open("Python/Practice/Hi-score.txt", "w")
    h.write(i)
    h.close()
