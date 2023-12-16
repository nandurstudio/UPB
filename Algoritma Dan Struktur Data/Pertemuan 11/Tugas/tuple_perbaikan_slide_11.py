num_list = [3, 1, 2]
del num_list[0]
print(num_list)  # Output: [1, 2]

num_tuple = (3, 1, 2)
# This will raise a TypeError because tuples are immutable
# del num_tuple[0]
print(num_tuple)
