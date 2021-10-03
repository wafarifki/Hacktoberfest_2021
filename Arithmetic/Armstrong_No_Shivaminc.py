number = int(input("Enter the number : "))
result = 0
n = 0
temp = number;
while (temp != 0):
    temp =int(temp / 10)
    n = n + 1

#Checking if the number is armstrong
temp = number
while (temp != 0):
    remainder = temp % 10
    result = result + pow(remainder, n)
    temp = int(temp/10)
if(result == number):
    print("Armstrong number")
else:
    print("Not an Armstrong number")
