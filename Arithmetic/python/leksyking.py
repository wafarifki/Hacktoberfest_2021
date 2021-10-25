#Solve quadratic equations with python
#input all required values
a = int(input("Enter the value of a:"))
b = int(input("Enter the value of b:"))
c = int(input("Enter the value of c:"))
# calculate the Determinant
d = b**2 - 4*a*c
#check for complex number
if (d<0):
    print("Complex number found")
elif (d>0):
    x = (-b + (d)**0.5)/(2*a)
    y = (-b - (d)**0.5)/(2*a)
    #output the two values
    print(x, y)
else:
    x = -b/(2*a);
    y = -b / (2 * a);
    print(x, y)
