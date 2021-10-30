#Python function for tolerance comparation 
a = 100000
b = 90000
tolerance = 0.1
if abs(a - check(b)) < tolerance * abs(check(b)): 
	print("In range")

