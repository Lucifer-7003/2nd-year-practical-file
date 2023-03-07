# Q8. Write a Python program to print all prime numbers in an interval.

# Get the lower and upper limits from the user
lower = int(input("Enter the lower limit: "))
upper = int(input("Enter the upper limit: "))

# Print a message indicating what the program is doing
print(f"Prime numbers between {lower} and {upper} are:")

# Loop through all numbers between the lower and upper limits, inclusive
for num in range(lower, upper+1):

    # Check if the current number is greater than 1, since 1 is not a prime number
    if num > 1:

        # Loop through all numbers between 2 and half the current number, inclusive
        # This is because any number greater than half of the current number cannot be a factor
        # that produces an integer quotient when divided into the current number
        for i in range(2, int(num/2)+1):

            # If the current number is divisible by i, then it is not a prime number
            if (num % i) == 0:

                # Exit the inner loop early if a divisor is found
                break

        # If the inner loop completes without finding a divisor, then the current number is prime
        else:

            # Print the prime number
            print(num, end=", ")

# Print a newline character to make the output look cleaner
print()
