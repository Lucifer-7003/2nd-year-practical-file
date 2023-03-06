# Q12. Write a Python program to find the largest number in a list.

lst = [45, 23, 67, 12, 9]
largest = lst[0]

for num in lst:
    if num > largest:
        largest = num

print(f"The largest number in the list is {largest}")
