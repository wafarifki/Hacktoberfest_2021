## Firstly I am reading input
## then I am printing output 
n=int(input())
answer=[[1]]
for i in range(2, n+1):
    t=[i]*((2*i)-3)
    answer.insert(0, t)
    answer.append(t.copy())
    for a in answer:
        a.insert(0,i)
        a.append(i)
answerfinal=[]
for a in answer:
    answerfinal.append(str(a).replace(' ','').replace(',','').replace(']','').replace('[',''))   
for a in answerfinal:
    print(a)
