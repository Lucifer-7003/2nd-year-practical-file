# Q10. Write a Python program to check if a given number is a Fibonacci number.

def is_fibonacci(num):
    a, b = 0, 1
    while b < num:
        a, b = b, a + b
    return b == num or num == 0


num = int(input("Enter a number: "))
if is_fibonacci(num):
    print(f"{num} is a Fibonacci number")
else:
    print(f"{num} is not a Fibonacci number")
