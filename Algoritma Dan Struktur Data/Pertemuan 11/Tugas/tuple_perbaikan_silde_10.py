num_list = [3, 1, 2]
num_list[0] = 7
print(num_list)  # Output: [7, 1, 2]

num_tuple = (3, 1, 2)
# This will raise a TypeError because tuples are immutable
# num_tuple[0] = 7
print(num_tuple)
