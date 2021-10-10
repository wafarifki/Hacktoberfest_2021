#code for palindrome number
number = int(input())

reverse = 0
temp = number

while(temp > 0):
    Remainder = temp % 10
    reverse = (reverse * 10) + Remainder
    temp = temp //10

if(number == reverse):
    print('true')
else:
    print('false')
