# # Write a program to create a list representing the results of 100 students in a test, 
# # where each element represents a student's marks (between 0 to 10), and display a 
# # histogram for the result. 

import matplotlib.pyplot as plt

Result = [1, 1, 8, 1, 10, 1, 1, 8, 10, 10, 10, 3, 3, 8, 4, 9, 8, 5, 4, 9, 6, 8, 5, 7, 3, 7, 1, 8, 7, 8, 9, 6, 2, 1, 8, 5, 2, 1, 2, 4, 10, 7, 4, 3, 8, 9, 5, 10, 1, 4, 1, 8, 9, 2, 10, 3, 4, 8, 4, 6, 2, 7, 10, 10, 8, 8, 2, 2, 3, 10, 7, 6, 3, 8, 2, 9, 9, 8, 7, 9, 1, 9, 8, 7, 3, 2, 9, 8, 7, 10, 10, 6, 6, 6, 7, 3, 3, 3, 4, 2, 1]

plt.hist(Result, bins=30, range=(0,10))

plt.title('Result')
plt.xlabel('X')
plt.ylabel('Y')

plt.show()