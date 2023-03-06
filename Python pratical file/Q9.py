# Q9. Write a Python program to check whether a number is a palindrome or not.

num = int(input("Enter a number: "))
temp = num
reverse = 0

while temp > 0:
    digit = temp % 10
    reverse = (reverse * 10) + digit
    temp //= 10

if num == reverse:
    print(f"{num} is a palindrome")
else:
    print(f"{num} is not a palindrome")
