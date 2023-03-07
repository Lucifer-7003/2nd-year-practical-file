# Q4. Write a Python program to find the simple interest.

# Get the principal amount from the user
principal = float(input("Enter the principal amount: "))

# Get the rate of interest from the user
rate = float(input("Enter the rate of interest: "))

# Get the time period in years from the user
time = float(input("Enter the time period in years: "))

# Calculate the simple interest using the formula: (P * R * T) / 100
# where P is the principal amount, R is the rate of interest, and T is the time period in years
simple_interest = (principal * rate * time) / 100

# Print the simple interest
print(f"The simple interest is: {simple_interest}")
