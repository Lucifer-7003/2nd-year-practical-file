# Q14. Write a Python program to swap two elements in a list.

lst = [45, 23, 67, 12, 9]
pos1 = int(input("Enter the position of first element to swap: "))
pos2 = int(input("Enter the position of second element to swap: "))

lst[pos1], lst[pos2] = lst[pos2], lst[pos1]

print(f"The list after swapping the elements: {lst}")
