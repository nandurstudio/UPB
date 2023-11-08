filename = "my_file.txt"
my_file = open(filename)
my_file_content = my_file.read()
print("Content of " + filename + ":\n" + my_file_content)
my_file.close()