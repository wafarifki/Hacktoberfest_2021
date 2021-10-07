## I have read input first
## then I have Printed output 
n=int(input())
def Fibonacci(n):
    if n==1:
        return 1
    elif n==2:
        return 1
    elif n==3:
        return 2
    elif n>=4:
        return Fibonacci(n-1)+Fibonacci(n-2)
# main
print(Fibonacci(n))
