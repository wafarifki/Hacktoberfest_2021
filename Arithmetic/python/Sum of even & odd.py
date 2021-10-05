## Note : For printing multiple values in one line, I put them inside print separated by space.
## I can follow this syntax for printing values of two variables val1 and val2 separaetd by space -
## print(val1, " ", val2)

N = int(input())
even_total = 0
odd_total = 0
even = []
odd = []
 
while N>0:
    remainder= N%10
    if(remainder % 2 == 0):
        even.append(remainder)
    else:
        odd.append(remainder)
    quotient=int(N/10)
    N=quotient
   
even_total = sum(even)
odd_total = sum(odd)
print(int(even_total), int(odd_total))
