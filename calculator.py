operation = input("Would you like to 1: add, 2: subtract, 3: multiply or 4: divide? (enter a number)")
a = input("What's your first number?")
b = input("What's your second number?")
total = 0 

if operation == 1:
  total = a + b

if operation == 2:
  total = a - b
  
if operation == 3:
  total = a * b

else: 
  total = a // b
  
print("Your answer is " + (total))
