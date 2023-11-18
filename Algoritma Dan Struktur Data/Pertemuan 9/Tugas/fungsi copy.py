from math import *

#slide 2
print("Hello, world!") # calls print() function

#slide 3
print(ceil(1.23))
print(pow(5,3))
print(factorial(4))

#slide 4
# compute factorial of 3
result = 1
for i in range(1,4):
  result *= i
print("Factorial of", 3, "is", result)

# compute factorial of 4
result = 1
for i in range(1,5):
  result *= i
print("Factorial of", 4, "is", result)

#slide 6, 7
def my_factorial(x): # function signature
    # function body
    result = 1
    for i in range(1,x+1):
        result *= i
    return result
my_factorial(4)

#slide 8, 9, 10
def hi(kota):
    print("Hi, " + kota + "!")
hi("Karawang")

#slide 11, 12
def hi_fitri():
    name = "Nandur"
    print("Hi, " + name + "!")

hi_fitri()
