# Q22. Write a Python program to perform a linear search.

# Linear Search Algorithm
def linear_search(lst, x):
    """
    This function takes a list and a value as input and 
    returns the index of the value in the list if it is 
    present, otherwise it returns -1.
    """
    for i in range(len(lst)):  # Loop through the list
        if lst[i] == x:  # If the value is found
            return i  # Return the index
    return -1  # If the value is not found, return -1


lst = [3, 7, 1, 4, 9, 2, 6]
x = 4
print(f"Original List: {lst}")
index = linear_search(lst, x)
if index != -1:  # If the value is found
    print(f"{x} is present at index {index} in the list.")
else:  # If the value is not found
    print(f"{x} is not present in the list.")
