# Write  a  program  to  read  the  marks  and  assign  a
# grade  to  a  student.    Grading  system:  A  (>=90),  B
# (80-89), C (70-79), D (60-69), E (50-59), F (<50). (Use
# if-elif-else)

marks = int(input("Enter the marks: "))

if marks >= 90:
    print("A")
elif marks >= 80:
    print("B")
elif marks >= 70:
    print("C")
elif marks >= 60:
    print("D")
elif marks >= 50:
    print("E")
else:
    print("F")
