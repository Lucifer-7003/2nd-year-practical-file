# Q26. Write a Python program to create a lambda function.

# Example 1: Multiplying a number by 2 using a lambda function
def multiply_by_two(x): return x * 2  # Define lambda function


num = 5
result = multiply_by_two(num)  # Call lambda function
print("Result of multiplying", num, "by 2 is", result)

# Example 2: sorting a list of tuples based on the second element
list_of_tuples = [(1, 4), (2, 3), (3, 2), (4, 1)]
# Sorting the list based on the second element of the tuples
sorted_list = sorted(list_of_tuples, key=lambda x: x[1])
print(f"Sorted list based on second element of tuples is {sorted_list}")
