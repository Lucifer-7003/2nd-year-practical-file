# Q5. Write a Python program to find the compound interest.

# Ask the user for the principal amount, rate of interest, and time period
principal = float(input("Enter the principal amount: "))
rate = float(input("Enter the rate of interest: "))
time = float(input("Enter the time period in years: "))

# Calculate the compound interest using the formula:
# compound_interest = (principal * (1 + rate / 100) ** time) - principal
compound_interest = (principal * (1 + rate / 100) ** time) - principal

# Print the result to the user with an f-string that includes the calculated compound interest
print(f"The compound interest is: {compound_interest}")
