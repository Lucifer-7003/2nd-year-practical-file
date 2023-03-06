# Q16. Write a Python program to check if an element exists in a list using different methods.

# Method 1: Using the "in" operator

lst = [1, 2, 3, 4, 5]
print('Method 1: Using the "in" operator')
if 3 in lst:
    print("Element exists in the list")
else:
    print("Element does not exist in the list")

# Method 2: Using a loop

print("Method 2: Using a loop")
element = 3
flag = False
for i in lst:
    if i == element:
        flag = True
        break
if flag:
    print("Element exists in the list")
else:
    print("Element does not exist in the list")
