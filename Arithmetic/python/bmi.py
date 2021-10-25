height = float(input("Enter your height in cm: "))
weight = float(input("Enter your weight in kg: "))

BMI = weight/(height/100)**2

print("Your BMI is "+str(round(BMI,2)))
