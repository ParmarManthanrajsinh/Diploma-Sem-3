# Write a program to perform below operations on dictionary:
# ● Create a dictionary.
# ● Print dictionary items.
# ● Add/remove key-value pair in/from a dictionary.
# ● Check whether a key exists in a dictionary.
# ● Iterate through a dictionary.
# ● Concatenate multiple dictionaries.

my_dict = {"name": "Alice", "age": 25, "city": "New York"}

print("Dictionary items:")
for key, value in my_dict.items():
    print(key, " : ", value)

my_dict["occupation"] = "Engineer"
print("\nAfter adding key:")
print(my_dict)

removed_value = my_dict.pop("age")
print("\nAfter removing 'age':")
print(my_dict)
print("Removed value: ", removed_value)

key_to_check = "city"
if key_to_check in my_dict:
    print(f"\nKey '{key_to_check}' exists in the dictionary.")
else:
    print(f"\nKey '{key_to_check}' does not exist in the dictionary.")

print("\nIterating through the dictionary:")
for key, value in my_dict.items():
    print(f"{key}: {value}")

dict1 = {"A": 1, "B": 2}
dict2 = {"C": 3, "D": 4}
dict3 = {"E": 5, "F": 6}

merged_dict = {**dict1, **dict2, **dict3}
print("\nConcatenated dictionary:")
print(merged_dict)
