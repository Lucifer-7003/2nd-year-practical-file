# Q28. Write a Python program to print the following pattern:
# 1
# 2 3
# 4 5 6
# 7 8 9 10

# Program to print a number triangle pattern
n = int(input("Enter the number of rows: "))
num = 1  # Initialize the starting number

# Iterate over each row of the triangle
for i in range(1, n+1):
    # Iterate over each column in the current row
    for j in range(1, i+1):
        # Print the current number and increment it for the next iteration
        print(num, end=" ")
        num += 1
    # Move to the next line for the next row
    print()
