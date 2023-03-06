# Q3. Write a Python program to find the factorial of a number.

num = int(input("Enter a number: "))

factorial = 1

if num < 0:
    print("Factorial cannot be found for negative numbers")
elif num == 0:
    print("Factorial of 0 is 1")
else:
    for i in range(1, num + 1):
        factorial = factorial * i
    print(f"Factorial of {num} is {factorial}")
