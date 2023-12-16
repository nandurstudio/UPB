num_list = [3, 1, 2]
num_list.append(5)
print(num_list)  # Output: [3, 1, 2, 5]

num_tuple = (3, 1, 2)
# This will throw an AttributeError because tuples don't have an 'append' method
# num_tuple.append(5)
print(num_tuple)
