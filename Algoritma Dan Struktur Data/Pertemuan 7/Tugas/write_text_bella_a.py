filename_bella_ammend = "bella-ciao.txt"
my_file_b = open(filename_bella_ammend, mode='a')
print("ciao amore", file=my_file_b)
my_file_b.close()