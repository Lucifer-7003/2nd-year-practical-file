# Q2. Write a Python program to find the maximum of two numbers.

num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))

maximum = max(num1, num2)

print(f"The maximum of {num1} and {num2} is {maximum}".format(
    num1, num2, maximum))
