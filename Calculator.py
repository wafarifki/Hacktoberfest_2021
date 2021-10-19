print("NO CAPITALS")
ask_user = input("Do you want to add, subtract, divide, or multiply: ")
a = float(input("Put your number in here for your sum: "))
b = float(input("Put your other number in here for your sum: "))
sum = 0
if ask_user == "divide":
  sum = a // b
  print(str(a) + " / " + str(b) + " = " + str(sum))
if ask_user == "add":
  sum = a + b
  print(str(a) + " + " + str(b) + " = " + str(sum))
if ask_user == "subtract":
  sum = a - b
  print(str(a) + " - " + str(b) + " = " + str(sum))
if ask_user == "multiply":
  sum = a * b
  print(str(a) + " * " + str(b) + " = " + str(sum))
