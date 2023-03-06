# Q20. Write a Python program to accept strings which contain all vowels.

def has_all_vowels(s):
    vowels = set('aeiou')
    return vowels.issubset(set(s.lower()))


string = input("Enter a string: ")
if has_all_vowels(string):
    print("The string contains all vowels.")
else:
    print("The string does not contain all vowels.")
