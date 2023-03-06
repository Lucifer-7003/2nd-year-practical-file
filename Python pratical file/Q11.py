# Q11. Write a Python program to find the smallest number in a list.

lst = [45, 23, 67, 12, 9]
smallest = lst[0]

for num in lst:
    if num < smallest:
        smallest = num

print(f"The smallest number in the list is {smallest}")
