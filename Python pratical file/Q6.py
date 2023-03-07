# Q6. Write a Python program to check if a given number is an Armstrong number.

# take input from user and convert to integer
num = int(input("Enter a number: "))

# initialize sum to zero
sum = 0

# create a copy of the input number
temp = num

# determine the order of the input number (i.e. the number of digits)
order = len(str(num))

# loop through each digit of the input number
while temp > 0:
    # get the rightmost digit of the input number
    digit = temp % 10

    # add the digit raised to the power of the order to the sum
    sum += digit ** order

    # remove the rightmost digit from the input number
    temp //= 10

# check if the sum is equal to the input number
if num == sum:
    print(f"{num} is an Armstrong number")
else:
    print(f"{num} is NOT an Armstrong number")
