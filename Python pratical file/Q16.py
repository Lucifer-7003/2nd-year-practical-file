# Q16. Write a Python program to check if an element exists in a list using different methods.

# Define the list to search for an element
lst = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# Print the original list
print(f"Original List: {lst}\n")

# Method 1: Using the "in" operator
print('Method 1: Using the "in" operator')

# Set the element
element = 3

# Check if the element exists in the list using the "in" operator
if element in lst:
    print(f"Element {element} exists in the list")
else:
    print(f"Element {element} does not exist in the list")
print()

# Method 2: Using a loop
print("Method 2: Using a loop")

# Set the element to search for and initialize a flag
element = 3
flag = False

# Iterate through the list and check if the element exists
for i in lst:
    if i == element:
        flag = True
        break

# Print the result based on whether the element was found or not
if flag:
    print(f"Element {element}  exists in the list")
else:
    print(f"Element {element} does not exist in the list")
