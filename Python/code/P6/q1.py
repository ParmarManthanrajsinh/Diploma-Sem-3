# Write a program to perform the below operations on the list:
# ● Create a list.
# ● Add/Remove an item to/from a list.
# ● Get the number of elements in the list.
# ● Access elements of the list using the index.
# ● Sort the list.
# ● Reverse the list
# Create a list
my_list = []

while True:
    print("\nList Operations:")
    print("1. Add item to list")
    print("2. Remove item from list")
    print("3. Get number of elements in list")
    print("4. Access element by index")
    print("5. Sort list")
    print("6. Reverse list")
    print("7. Quit")

    choice = input("Enter your choice: ")

    if choice == "1":
        item = input("Enter item to add: ")
        my_list.append(item)
        print("Item ", item, " added to the list. Current list:", my_list)
    elif choice == "2":
        item = input("Enter item to remove: ")
        if item in my_list:
            my_list.remove(item)
            print("Item ", item, " removed from the list. Current list: ", my_list)
        else:
            print("Item ", item, " not found in the list.")
    elif choice == "3":
        print("Number of elements in the list: ", len(my_list))
    elif choice == "4":
        index = int(input("Enter index: "))
        if index <= len(my_list):
            print("Element at index ", index, ": ", my_list[index])
        else:
            print("Index ", index, " out of range.")
    elif choice == "5":
        my_list.sort()
        print("List sorted. Current list: ", my_list)
    elif choice == "6":
        my_list.reverse()
        print("List reversed. Current list: ", my_list)
    elif choice == "7":
        break
    else:
        print("Invalid choice. Please try again.")
