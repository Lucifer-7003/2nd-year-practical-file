# Q14. Write a Python program to swap two elements in a list.

# Define the initial list
lst = [45, 23, 67, 12, 9]

# Prompt the user to enter the positions of the elements to swap
pos1 = int(input("Enter the position of the first element to swap: "))
pos2 = int(input("Enter the position of the second element to swap: "))

# Print the original list
print(f"Original List: {lst}")

# Check if the positions entered are different
if pos1 != pos2:
    # Swap the elements using tuple assignment
    lst[pos1], lst[pos2] = lst[pos2], lst[pos1]
    # Print the list after swapping
    print(f"The list after swapping the elements: {lst}")

else:
    # Print an error message if the same position is entered
    print("Error: Both positions are the same. Please enter different positions.")
