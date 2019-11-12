x=int(input("ingrese un numero "))
factorial = 1

for i in range(1,x):
    factorial = factorial * x
    x -= 1
    print(factorial, end=" ")