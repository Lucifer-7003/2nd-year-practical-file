# Q15. Write a Python program to find the length of a list using different methods.

# Define the list
lst = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# Print the original list
print(f"Original List: {lst}\n")

# Method 1: Using the len() function
print("Method 1: Using the len() function")

# Use the len() function to find the length of the list
length = len(lst)
print(f"Length of the list is: {length}\n")

# Method 2: Using a loop
print("Method 2: Using a loop")

# Initialize a counter variable to 0
count = 0

# Iterate over the elements of the list and increment the counter for each element
for i in lst:
    count += 1

# Print the value of the counter as the length of the list
print(f"Length of the list is: {count}\n")
