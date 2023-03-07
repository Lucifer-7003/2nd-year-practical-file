# Q12. Write a Python program to find the largest number in a list.

# Define a list of integer
lst = [45, 23, 67, 12, 9]

# Print the original list
print(f"List: {lst}")

# Assume that the first number in the list is the largest
largest = lst[0]

# Loop through each element of the list
for num in lst:
    # Check if the current element is larger than the current value of 'largest'
    if num > largest:
        # If it is, update the value of 'largest'
        largest = num

# Print the largest number found in the list
print(f"The largest number in the list is: {largest}")
