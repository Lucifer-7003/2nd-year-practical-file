# Q29. Write a Python program to print the following pattern:
# 2
# 4 6
# 8 10 12
# 14 16 18 20

n = int(input("Enter rows: "))
num = 2
for i in range(1, n+1):
    for j in range(1, i+1):
        print(num, end=" ")
        num += 2
    print()
