# Q27. Write a Python program to perform matrix multiplication.

# Creating matrices
A = [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]

B = [[10, 11, 12],
     [13, 14, 15],
     [16, 17, 18]]

# Result matrix
result = [[0, 0, 0],
          [0, 0, 0],
          [0, 0, 0]]

# Iterating through rows of A
for i in range(len(A)):
    # Iterating through columns of B
    for j in range(len(B[0])):
        # Iterating through rows of B
        for k in range(len(B)):
            result[i][j] += A[i][k] * B[k][j]

# Printing result
for r in result:
    print(r)
