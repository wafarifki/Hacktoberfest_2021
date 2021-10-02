def gcd(a,b):
    while(b):
        a,b = b,a%b
    return a
def lcm(a,b):
    ans = (a*b)//gcd(a,b)
    return ans


print("Enter Three numbers:")
n1 = int(input())
n2 = int(input())
n3 = int(input())


# gcd of 2 numbers
print("gcd=",gcd(n1,n2))
print("lcm",lcm(n1,n2))

# gcd/lcm of 3numbers
print("gcd=",gcd(n1,gcd(n2,n3)))
print("lcm=",lcm(n1,lcm(n2,n3)))
