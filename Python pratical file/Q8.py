# Q8. Write a Python program to print all prime numbers in an interval.

lower = int(input("Enter the lower limit: "))
upper = int(input("Enter the upper limit: "))

print(f"Prime numbers between {lower} and {upper} are:")

for num in range(lower, upper+1):
    if num > 1:
        for i in range(2, int(num/2)+1):
            if (num % i) == 0:
                break
        else:
            print(num)
