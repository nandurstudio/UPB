# Menulis File.
file1 = open("myfile.txt","w")
L = ["This is Delhi \n","This is Paris \n","This is London \n"]
 
# \n is Ahir kalimat
file1.write("Hello \n")
file1.writelines(L)
file1.close() #to change file access modes
 
file1 = open("myfile.txt","r+")
 
print("Output of Read function is ")
print(file1.read())
print()
 
# Membuka Handle File
 
file1.seek(0)
 
print( "Output of Readline function is ")
print(file1.readline())
print()
 
file1.seek(0)
 
#menunjukkan perbedaan antara read dan readline
print("Output of Read(9) function is ")
print(file1.read(9))
print()
 
file1.seek(0)
 
print("Output of Readline(9) function is ")
print(file1.readline(9))
 
#menunjukkan perbedaan antara read dan readline
# readlines function
print("Output of Readlines function is ")
print(file1.readlines())
print()
file1.close()