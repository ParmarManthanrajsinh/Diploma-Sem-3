# A  positive  integer  is  called  a  perfect  number  if  it  is  equal  to  the  sum  of  all  of  its
# positive  divisors,  excluding  itself.  For  example,  6  is  the  first  perfect  number,
# because 6  =  3 +  2  + 1,  the  next  is  28  =  14  +  7  + 4  +  2  + 1.  There  are  four  perfect
# numbers that are less than 10,000. Write a program to find these four numbers.

count = 0
for i in range(1, 10000):
    sum = 0
    for j in range(1, i):
        if (i % j) == 0:
            sum += j
    if sum == i:
        print(i, "is a perfect number")
        count += 1
    if count == 4:
        break
