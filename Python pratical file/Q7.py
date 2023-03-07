# Q7. Write a Python program to find the area of a circle.

# Import the math module to access mathematical functions
import math

# Prompt the user to enter the radius of the circle as input and convert it to a float
radius = float(input("Enter the radius of the circle: "))

# Calculate the area of the circle using the formula A = πr^2 and store it in a variable named 'area'
area = math.pi * (radius ** 2)

# Print the result using formatted string literal, which allows us to substitute the value of 'radius' and 'area' in the string
# The ':.2f' specifies that the area should be rounded to two decimal places
print(f"The area of the circle with radius {radius} is: {area:.2f}")
