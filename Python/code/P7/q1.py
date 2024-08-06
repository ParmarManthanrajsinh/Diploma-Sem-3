# Write a program to perform below operations on tuple: 
# ● Create a tuple with different data types. 
# ● Print tuple items. 
# ● Convert tuple into a list. 
# ● Remove data items from a list. 
# ● Convert list into a tuple. 
# ● Print tuple items.

my_tuple = (1, "hello", 3.14, True, [1, 2, 3], {"key": "value"})
print("Original tuple:", my_tuple)

my_list = list(my_tuple)
print("Converted to list:", my_list)

my_list.pop()
print("List after removing the last item:", my_list)

my_tuple = tuple(my_list)
print("Converted back to tuple:", my_tuple)

print("Final tuple:", my_tuple)
