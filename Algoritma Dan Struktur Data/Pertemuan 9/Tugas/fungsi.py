from math import *

def slide(x):
  print("\n")
  print("Slide", x)
  print("#=====================")

#===========================
#slide 2
slide("2")
print("Hello, UPB!") # calls print() function

#===========================
#slide 3
slide("3")
print(ceil(99.23))
print(pow(5,3))
print(factorial(6))

#===========================
#slide 4
# compute factorial of 3
slide("4")
result = 1
for i in range(1,4):
  result *= i
print("Factorial of", 3, "is", result)

# compute factorial of 4
result = 1
for i in range(1,5):
  result *= i
print("Factorial of", 4, "is", result)

#===========================
#slide 6, 7
slide("6, 7")
def my_factorial(n): # function signature
    # function body
    result = 1
    for i in range(1,n+1):
        result *= i
    return result
print(my_factorial(2))

#===========================
#slide 8, 9, 10
slide("8, 9, 10")
def hi(kota):
    print("Hi, " + kota + "!")
hi("Karawang")

#===========================
#slide 11, 12
slide("11, 12")
def hi_fitri():
    name = "Nandur"
    print("Hi, " + name + "!")

hi_fitri()
