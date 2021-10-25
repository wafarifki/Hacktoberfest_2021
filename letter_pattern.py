boolean=int(input("Enter 1) to print uppercase letters and 2) to print lowercase letters\n"))
if boolean==1:
    number=1
    star = 65
    list1=list()
    while(number<=26):
        list1.append(chr(star))
        x=" ".join(list1)
        print(x)
        number=number+1
        star=star+1

elif boolean==2:
    number=1
    star = 97
    list1 = list()
    while (number<=26):
        list1.append(chr(star))
        x = " ".join(list1)
        print(x)
        number = number + 1
        star = star + 1
else:
    print("Please enter valid number to print pattern")
