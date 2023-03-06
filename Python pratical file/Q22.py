# Q22. Write a Python program to perform a linear search.

def linear_search(lst, x):
    for i in range(len(lst)):
        if lst[i] == x:
            return i
    return -1


lst = [3, 7, 1, 4, 9, 2, 6]
x = 4
index = linear_search(lst, x)
if index != -1:
    print(f"{x} is present at index {index} in the list.")
else:
    print(f"{x} is not present in the list.")
