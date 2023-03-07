# Q10. Write a Python program to check if a given number is a Fibonacci number.

def is_fibonacci(num):
    """
    A function that determines if a given number is a Fibonacci number.
    Returns True if the number is Fibonacci, False otherwise.
    """
    # Initialize the first two Fibonacci numbers.
    a, b = 0, 1

    # Generate Fibonacci numbers until we find one that is greater than or equal to the input number.
    while b < num:
        a, b = b, a + b

    # If the last generated Fibonacci number is equal to the input number, it is a Fibonacci number.
    # Also, 0 is considered a Fibonacci number.
    return b == num or num == 0


# Ask the user to input a number.
num = int(input("Enter a number: "))

# Check if the input number is Fibonacci and print the result.
if is_fibonacci(num):
    print(f"{num} is a Fibonacci number")
else:
    print(f"{num} is not a Fibonacci number")
