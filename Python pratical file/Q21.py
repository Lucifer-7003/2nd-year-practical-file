# Q21. Write a Python program to find the maximum and minimum k elements in a tuple.

def max_min_k_elements(t, k):
    # Sort the tuple in ascending order
    sorted_t = sorted(t)

    # Return the last k elements as the maximum k elements
    # and the first k elements as the minimum k elements
    return sorted_t[-k:], sorted_t[:k]


# Define a tuple of integers
tuple1 = (3, 5, 1, 8, 9, 2, 6)

# Define the number of elements to find
k = 3

# Print the input tuple and the number of elements to find
print(f"Tuple: {tuple1}")
print(f"Element to find: {k}")

# Call the function to find the maximum and minimum k elements
max_k, min_k = max_min_k_elements(tuple1, k)

# Print the maximum k elements
print(f"The maximum {k} elements are: {max_k}")

# Print the minimum k elements
print(f"The minimum {k} elements are: {min_k}")
