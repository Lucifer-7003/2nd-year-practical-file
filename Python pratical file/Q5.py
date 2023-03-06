# Q5. Write a Python program to find the compound interest.

principal = float(input("Enter the principal amount: "))
rate = float(input("Enter the rate of interest: "))
time = float(input("Enter the time period in years: "))

compound_interest = principal * (1 + rate / 100) ** time - principal

print(f"The compound interest is {compound_interest}")
