# It's a Code for arithmetic operation of two given numbers
while True:
    x=int(input())
    if x==1:
        a=int(input())
        b=int(input())
        print(a+b)
    elif x==2:
        a=int(input())
        b=int(input())
        print(a-b)
    elif x==3:
        a=int(input())
        b=int(input())
        print(a*b)
    elif x==4:
        a=int(input())
        b=int(input())
        c=a/b
        print(int(c))
    elif x==5:
        a=int(input())
        b=int(input())
        c=a%b
        print(int(c))
    elif x==6:
        break
    else:
        print("Invalid Operation")
    
