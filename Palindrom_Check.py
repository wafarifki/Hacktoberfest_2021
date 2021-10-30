#taing user input
num=int(input("Enter a numer: "))
n =num
rem=0
rev=0
#while loop to reverse a number
while n>0:
    rem=n%10
    rev=(rev*10)+rem #number reverse formula
    n=n//10
#checking if original number is equal to the reversed number
if rev==num:
    print(rev,"is a Palindrom Number")
else:
    print(rev,"is  not a Palindrom Number")