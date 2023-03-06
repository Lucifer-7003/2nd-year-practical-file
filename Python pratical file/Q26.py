# Q26. Write a Python program to create a lambda function.

# Example 1: multiplying a number by 2 using lambda function
def multiply_by_two(x): return x * 2


num = 5
result = multiply_by_two(num)
print("Result of multiplying", num, "by 2 is", result)

# Example 2: sorting a list of tuples based on the second element
list_of_tuples = [(1, 4), (2, 3), (3, 2), (4, 1)]
sorted_list = sorted(list_of_tuples, key=lambda x: x[1])
print("Sorted list based on second element of tuples is", sorted_list)
