# Write a program to perform below operations on set: 
# ● Create two different sets with the data. 
# ● Print set items. 
# ● Add/remove items in/from a set. 
# ● Perform operations on sets: union, intersection, difference, symmetric_difference, check subset of another set.
set1 = {1, 2, 3, 4, 5}
set2 = {4, 5, 6, 7, 8}

print("Set 1:", set1)
print("Set 2:", set2)

set1.add(9)
print("Set 1 after adding 9:", set1)

set2.remove(7)
print("Set 2 after removing 7:", set2)

print("Union of Set 1 and Set 2:", set1.union(set2))
print("Intersection of Set 1 and Set 2:", set1.intersection(set2))
print("Difference of Set 1 and Set 2:", set1.difference(set2))
print("Symmetric Difference of Set 1 and Set 2:", set1.symmetric_difference(set2))

set3 = {1, 2, 3}
print("Is Set 3 a subset of Set 1?", set3.issubset(set1))