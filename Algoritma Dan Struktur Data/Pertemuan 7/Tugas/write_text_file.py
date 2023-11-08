filename = "my_file.txt"
my_file = open(filename, mode="w")
print("Don't forget", file=my_file)
print("to like", file=my_file)
print("and subscribe to", file=my_file)
print("my channel :)", file=my_file)
my_file.close()