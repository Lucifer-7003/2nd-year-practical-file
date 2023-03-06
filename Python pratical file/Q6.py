# Q6. Write a Python program to check if a given number is an Armstrong number.

num = int(input("Enter a number: "))

sum = 0
temp = num
order = len(str(num))

while temp > 0:
    digit = temp % 10
    sum += digit ** order
    temp //= 10

if num == sum:
    print(f"{num} is an Armstrong number")
else:
    print(f"{num} is NOT an Armstrong number")
