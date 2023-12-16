#Penyusunan Tupel Python
#Tupel bersarang di Python berarti tupel di dalam tupel lain
# Code untuk tuple bersarang
tuple1 = (0, 1, 2, 3)
tuple2 = ('python', 'OK')
tuple3 = (tuple1, tuple2)
print(tuple3)