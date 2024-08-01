# Write programs to print below patterns:
#      *
#     * *
#    * * *
#   * * * *
#  * * * * *

# 1
# 1 2
# 1 2 3
# 1 2 3 4
# 1 2 3 4 5

print("Pattern one:\n")

for i in range(5):
    for s in range(5-i):
        print(end=" ")
    
    for j in range(i+1):       
        print("*",end=" ")
    print("")
    
print("\nPatten two:\n")

for i in range(5):
    for j in range(i+1):
        print(j+1,end=" ")
    print()