filename = "my_file.txt"
my_file = open(filename)
for ln in my_file:
    if "to" in ln:
        print(ln, end='')
my_file.close()