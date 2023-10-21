# Ilusatrasi Program
# Iterating over a list
print("List Iteration")
l = ["upb", "for", "upb"]
for i in l:
	print(i)


#++++++++++++++++++++++++++++++++++++++++

# Iterasi pada tupple (tidak dapat di ubah)
print("\nTuple Iteration")
t = ("upb", "for", "upb")
for i in t:
	print(i)

#+++++++++++++++++++++++++++++++++++++++++++++++

# Iterasi pada String
print("\nString Iteration")
s = "UPB"
for i in s:
	print(i)
#++++++++++++++++++++++++++++++++++++++++

# Iterasi pada kamus
print("\nDictionary Iteration")
d = dict()
d['xyz'] = 123
d['abc'] = 345
for i in d:
	print("%s %d" % (i, d[i]))
#+++++++++++++++++++++++++++++++++++++++++++++++

# Iterasi pada  set
print("\nSet Iteration")
set1 = {1, 2, 3, 4, 5, 6}
for i in set1:
	print(i),
