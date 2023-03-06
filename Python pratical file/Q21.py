# Q21. Write a Python program to find the maximum and minimum k elements in a tuple.

def max_min_k_elements(t, k):
    sorted_t = sorted(t)
    return sorted_t[-k:], sorted_t[:k]


tuple1 = (3, 5, 1, 8, 9, 2, 6)
k = 3
max_k, min_k = max_min_k_elements(tuple1, k)
print(f"The maximum {k} elements are: {max_k}")
print(f"The minimum {k} elements are: {min_k}")
