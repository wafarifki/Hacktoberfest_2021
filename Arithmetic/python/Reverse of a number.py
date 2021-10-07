#code for reverse of a number in python

n = int(input())

temp = n
reverse_num = 0

while temp > 0 :
	last_digit = temp % 10
	temp = temp // 10
	reverse_num = reverse_num * 10 + last_digit

print(reverse_num)
