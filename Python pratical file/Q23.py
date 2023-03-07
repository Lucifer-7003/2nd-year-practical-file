# Q23. Write a Python program to read a file word by word.

# Program to read a file and print all the words in it
file_name = "Python pratical file/Q23.py"  # Name of the file to be read

with open(file_name, 'r') as f:  # Open the file in read mode
    for line in f:  # Loop through each line in the file
        words = line.split()  # Split the line into words
        for word in words:  # Loop through each word in the line
            print(word, end=" ")  # Print the word
        print()  # Move to the next line
