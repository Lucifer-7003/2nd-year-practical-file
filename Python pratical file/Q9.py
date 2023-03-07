# Q9. Write a Python program to check whether a number is a palindrome or not.

# Prompt the user to enter a number and convert it to an integer
num = int(input("Enter a number: "))

# Create a temporary variable to store the input number
temp = num

# Initialize a variable to store the reverse of the input number
reverse = 0

# Iterate over each digit in the input number using a while loop
while temp > 0:

    # Get the rightmost digit of the input number using the modulo operator
    digit = temp % 10

    # Append the rightmost digit to the reverse number by multiplying it by 10 and adding the digit
    reverse = (reverse * 10) + digit

    # Remove the rightmost digit from the input number using integer division
    temp //= 10

# Check if the reverse of the input number is equal to the original number
if num == reverse:

    # If the number is a palindrome, print a message indicating so
    print(f"{num} is a palindrome")
else:

    # If the number is not a palindrome, print a message indicating so
    print(f"{num} is not a palindrome")
