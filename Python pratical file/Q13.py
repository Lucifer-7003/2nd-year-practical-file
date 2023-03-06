# Q13. Write a Python program to interchange the first and last elements in a list.

lst = [45, 23, 67, 12, 9]
lst[0], lst[-1] = lst[-1], lst[0]

print(f"The list after interchanging the first and last elements: {lst}")
