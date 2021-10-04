#Check the no. is Prime or NOT
K=int(input())
x=1
for i in range(2,K):
    if K%i==0:
        x=0
        #break
    print(i,":",x)

if(x==0):
    print("Not a Prime number")
else:
    print("Prime number")        
