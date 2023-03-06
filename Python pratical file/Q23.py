# Q23. Write a Python program to read a file word by word.

file_name = input("Enter the file name: ")
with open(file_name, 'r') as f:
    for line in f:
        words = line.split()
        for word in words:
            print(word)
