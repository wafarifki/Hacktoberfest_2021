def menu():
 print(“\n Select 1 for addition”)
 print(“\n Select 2 for subtraction”) 
 print(“\n Select 3 for multiplication”) 
 print(“\n Select 4 for division”) 
 print(“\n Select 5 to close the program”)
# validation of the user inputting a integer
def integerValidation(msg = "Select one option "):
    validAnswer = False
    while (not validAnswer):
        try:
            userSelection = int(input(msg))
            validAnswer = True
        except:
            print("Select an int between 1-5")
    return userSelection
# for addition and multiplication we can specify how many numbers we wish to use
def multiInput():
 NumberOfNumbers = integerValidation(“How many numbers do you want? “)
 #empty list
 numbers = []
 for i in range(NumberOfNumbers):
 numbers.append(integerValidation(msg= “Number” + str(i+1) + “ “))
 return numbers
def add (numbers):
 total = 0
 for i in numbers:
 total = total + i
 return total
def multi (numbers):
    total = 1
    for i in numbers:
        total = total * i
    return total
def subtract (num1, num2):
    total = num1/num2
    return total
def div (num1,num2):
    total = float(num1 / num2)
    return total
********************************************************************
# initialise a while loop that begins as true so that the program loops until we select the closing option.
stillRunning = True
while(stillRunning): # while stillRunning is true
    menu()  # call the menu
    userSelection = integerValidation() # the user selection is integer validated
    
    if (userSelection == 1):            #if/ elif clauses based on the choice you make 
        print("****Addition****")
        numbers = multiInput()
        result = add(numbers)
        print(result)
elif (userSelection == 2):
        print("***Subtraction***")
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter 2nd number: "))
        result = subtract(num1,num2)
        print(result)
elif (userSelection == 3):
        print("****Multiplication****")
        numbers = multiInput()
        result = multi(numbers)
        print(result)
elif (userSelection == 4):
        print("***division***")
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter 2nd number: "))
        result = div(num1,num2)
        print(result)
        
    elif (userSelection == 5):   #if the user picks 5 then close
        print("Closing")
        stillRunning = False   # the while loop condition is now set to false.
else: 
        print("Pick a number between 1-5")
