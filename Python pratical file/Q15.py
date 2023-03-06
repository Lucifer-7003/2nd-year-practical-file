# Q15. Write a Python program to find the length of a list using different methods.

# Method 1: Using the len() function

lst = [1, 2, 3, 4, 5]

print("Method 1: Using the len() function")
print("Length of the list is:", len(lst))

# Method 2: Using a loop

print("Method 2: Using a loop")
count = 0
for i in lst:
    count += 1
print("Length of the list is:", count)
