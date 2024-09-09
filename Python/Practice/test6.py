words = ["bad","shit","donkey"]

f = open("Python/Practice/text1.txt")
contant = f.read()
f.close()

for word in words:
    contant = contant.replace(word,"#" * len(word))

f = open("Python/Practice/text1.txt","w")
f.write(contant)
f.close()