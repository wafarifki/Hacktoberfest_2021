# Rock Paper Scissors
import random
def play():
    again=0
    AI=random.randint(1,3)
    print("--------------------------\n")
    print("1. Rock\n")
    print("2. Paper\n")
    print("3. Scissor\n")
    user=-1
    while(user !=1 or user !=2 or user !=3):
        while(True):
            try:
                user=int(input("Enter a Choice(1,2,3): "))
                break
            except:
                print("\nEnter a valid Option\n")
        if(user==1 or user==2 or user==3):
            print("--------------------------")
            print("AI Choice    : %s" % rps(AI))
            print("User Choice  : {}".format(rps(user)))
            print("Result       :",result(Calculate(user,AI)))
            while(True):
                try:
                    print("--------------------------\n")
                    print("1. Yes\n")
                    print("2. No\n")
                    choice=int(input("Play Again? : "))
                    break
                except:
                    print("\nEnter a valid Option\n")
            if(choice==1):
                again=1
                break
            else:
                again=0
                break
        else:
            print("\nEnter a valid Option\n")
    return again
def result(res):
    if res==1:
        return "You Win"
    elif res==0:
        return "Draw"
    else:
        return "You Lose"
def rps(choice):
    if(choice==1):
        return "Rock"
    elif(choice==2):
        return "Paper"
    else:
        return "Scissors"
def Calculate(user,AI):
    if(user==AI):
        return 0
    elif(user==1):
        if(AI==2):
            return -1
        else:
            return 1
    elif(user==2):
        if(AI==1):
            return 1
        else:
            return -1
    else:
        if(AI==1):
            return -1
        else:
            return 1
#---------------------------------
option=-1

print("-----------Menu-----------",end="\n")
print("1. Play",end="\n")
print("0. Quit")
while(option!=0):
    while(True):
        try:
            option=int(input("Your Choice : "))
            break
        except:
            print("\nEnter a valid Option\n")
    if(option==1):
        option=play()
        while(option!=0):
            option=play()
        if(option==0):
            print("Bye!")
            break
    elif(option==0):
        print("Bye!")
        break
    else:
        print("\nEnter a valid Option\n")
        
