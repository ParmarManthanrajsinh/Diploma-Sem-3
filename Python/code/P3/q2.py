# Write a program to compute the slope of a line 
# between two points (x1, y1) and (x2, y2). 

p1_x, p1_y = input("Enter the first point (x y): \n").split()
p2_x, p2_y = input("Enter the second point (x y): \n").split()

p1_x = float(p1_x)
p1_y = float(p1_y)
p2_x = float(p2_x)
p2_y = float(p2_y)

# print("(" + str(p1_x) + ", " + str(p1_y) + ")")
# print("(" + str(p2_x) + ", " + str(p2_y) + ")")

ans = (p2_y - p1_y)/(p2_x - p1_x)

print("The slop is " , ans)