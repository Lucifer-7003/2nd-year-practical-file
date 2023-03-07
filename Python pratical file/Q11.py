# Q11. Write a Python program to find the smallest number in a list.

# Define a list of integers
lst = [45, 23, 67, 12, 9]

# Print the original list
print(f"List: {lst}")

# Assume that the first number in the list is the smallest
smallest = lst[0]

# Loop through each element of the list
for num in lst:
    # Check if the current element is smaller than the current value of 'smallest'
    if num < smallest:
        # If it is, update the value of 'smallest'
        smallest = num

# Print the smallest number found in the list
print(f"The smallest number in the list is {smallest}")
