# Q17. Write a Python program to clear a list using different methods.

# Method 1: Using the clear() method

# create a list of numbers from 1 to 10
lst = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# print the original list
print(f"Original list: {lst}\n")

# use the clear() method to remove all elements from the list
lst.clear()

# print the list after clearing it
print(f"List after clearing using clear() method: {lst}\n")

# Method 2: Assigning an empty list

# reassign an empty list to the same variable
lst = []

# print the list after reassigning an empty list
print(f"List after clearing by assigning an empty list: {lst}\n")
