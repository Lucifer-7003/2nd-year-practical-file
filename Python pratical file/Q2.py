# Q2. Write a Python program to find the maximum of two numbers.

# Ask the user to input two numbers
num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))

# Use the max() function to determine the maximum of the two numbers
maximum = max(num1, num2)

# Print the result using an f-string
print(f"The maximum of {num1} and {num2} is: {maximum}")
