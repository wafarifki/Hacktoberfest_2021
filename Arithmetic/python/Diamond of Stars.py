#code for printing a diamond structure using stars

## I am reading input first
## then I am Printing output
def pattern(n):
    for i in range(n):
        if i<=n/2:
            for j in range (n//2-i):
                print(' ',end="")
            for k in range(2*i+1):
                print('*',end="")
            print()
        elif i==n//2:
            for j in range(n):
                print('*',end='')
            print()
        else:
            for j in range (i-n//2):
                print(' ',end='')
            for k in range ((n-i)*2-1):
                print('*',end='')
            print()
n=int(input())
pattern(n)
