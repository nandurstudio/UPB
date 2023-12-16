a = (5, 7, 1)
b = (5, 3, 1)

x = 0
for i in range(len(a)):
  if a[i] == b[i]:
    x += 1

print(x) # 2
