# Q3. Write a Python program to find the factorial of a number.

# Prompt the user to enter a number and convert it to an integer
num = int(input("Enter a number: "))

# Initialize the factorial to 1
factorial = 1

# Check if the number is negative, in which case the factorial cannot be found
if num < 0:
    print("Factorial cannot be found for negative numbers")

# Check if the number is 0, in which case the factorial is 1
elif num == 0:
    print("Factorial of 0 is 1")

# If the number is positive, find its factorial using a loop
else:
    # Loop through all numbers from 1 to the input number
    for i in range(1, num + 1):
        # Multiply the factorial by the current number
        factorial = factorial * i
    # Print the result
    print(f"Factorial of {num} is: {factorial}")
