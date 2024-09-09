def gentable(n):
    table = "\n"
    for i in range(1,11):
        table += f"{n} x {i} = {n*i}\n"
    
    f = open("Python/Practice/table.txt","a")
    f.write(table)
    f.close()


for i in range(1,21):
    gentable(i)