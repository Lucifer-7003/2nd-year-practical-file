# Q20. Write a Python program to accept strings which contain all vowels.

def has_all_vowels(s):
    # Define a set of vowels
    vowels = set('aeiou')
    # Check if the set of vowels is a subset of the set of characters in the input string (in lower case)
    return vowels.issubset(set(s.lower()))


# Ask the user to enter a string
string = input("Enter a string: ")
# Check if the string contains all vowels using the has_all_vowels function
if has_all_vowels(string):
    print("The string contains all vowels.")
else:
    print("The string does not contain all vowels.")
