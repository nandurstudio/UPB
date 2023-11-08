filename_bella_w = "bella-ciao_w.txt"
my_file_w = open(filename_bella_w, mode='w')
print("bella", file=my_file_w)
print("ciao", file=my_file_w)
my_file_w.close()