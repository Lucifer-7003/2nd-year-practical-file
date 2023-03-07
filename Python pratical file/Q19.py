# Q19. Write a Python program to check if a substring is present in a given string.

# Define a string variable containing a message
str = "Hello, World!"

# Define a substring that we want to check whether it exists in the above string
substr = "World"

# Print the original string and the substring we are checking for
print(f"String: {str}")
print(f"Substring: {substr}")

# Check whether the substring exists in the string using the "in" operator
if substr in str:
    print("Substring exists in the string")
else:
    print("Substring does not exist in the string")
