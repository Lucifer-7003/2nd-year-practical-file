# Q24. Write a Python program to create a calculator using functions (create a separate function for each operation).

# Simple Calculator Program

def add(a, b):
    # Function to add two numbers
    return a + b


def subtract(a, b):
    # Function to subtract two numbers
    return a - b


def multiply(a, b):
    # Function to multiply two numbers
    return a * b


def divide(a, b):
    # Function to divide two numbers
    if b == 0:
        return "Cannot divide by zero"
    else:
        return a / b


# Print the options for the calculator
print("Choose an operation:")
print("1. Addition")
print("2. Subtraction")
print("3. Multiplication")
print("4. Division")

# Continuously ask the user for input until they quit
while True:
    # Ask the user for their choice of operation
    choice = input("\nEnter choice (1/2/3/4): ")

    # Use match statement to execute the selected operation
    match choice:
        case '1':
            num1 = float(input("Enter first number: "))
            num2 = float(input("Enter second number: "))
            print(f"{num1} + {num2} = {add(num1, num2)}")
        case '2':
            num1 = float(input("Enter first number: "))
            num2 = float(input("Enter second number: "))
            print(f"{num1} - {num2} = {subtract(num1, num2)}")
        case '3':
            num1 = float(input("Enter first number: "))
            num2 = float(input("Enter second number: "))
            print(f"{num1} * {num2} = {multiply(num1, num2)}")
        case '4':
            num1 = float(input("Enter first number: "))
            num2 = float(input("Enter second number: "))
            print(f"{num1} / {num2} = {divide(num1, num2)}")
        case _:
            print("Invalid input")  # Handle invalid input from the user
            break
