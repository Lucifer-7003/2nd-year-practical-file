# Q13. Write a Python program to interchange the first and last elements in a list.

# Define a list of integers
lst = [45, 23, 67, 12, 9]

# Print the original list
print(f"The list before interchanging the first and last elements: {lst}")

# Swap the first and last elements of the list using tuple unpacking
lst[0], lst[-1] = lst[-1], lst[0]

# Print the modified list
print(f"The list after interchanging the first and last elements: {lst}")
