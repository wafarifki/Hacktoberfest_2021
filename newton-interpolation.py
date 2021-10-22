import numpy as np
import matplotlib.pyplot as plt


def p_cal(p,n):

    temp=p
    for i in range(1,n):
        temp=temp*(p-i)
    return temp
def fact(n):
    factor =1
    for i in range(2,n+1):
        factor*=i
    return factor
  
n = int(input('Enter number of data points: '))


x = np.zeros((n))
y = np.zeros((n,n))

print('Enter data for x and y: ')
for i in range(n):
    x[i] = float(input( 'x['+str(i)+']='))
    y[i][0] = float(input( 'y['+str(i)+']='))
    

for i in range(1,n):
    for j in range(0,n-i):
        y[j][i] = y[j+1][i-1] - y[j][i-1]

value = float(input("\nnew estimated point= "))

        
print('\nFORWARD DIFFERENCE TABLE\n')

for i in range(0,n):
    print('%0.4f' %(x[i]), end='')
    for j in range(0, n-i):
        print('\t\t%0.4f' %(y[i][j]), end='')
    print()

    
 

sum = y[0][0]
p = (value - x[0]) / (x[1] - x[0])
for i in range(1,n):
    sum = sum + (p_cal(p, i) * y[0][i]) / fact(i)
 
print("\nValue at", value,
      "is", round(sum, 4))

#plot a graph 
value1 = np.array([value])
plt.title("Newton Interpolation Method Graph")
plt.xlabel("X axis")
plt.ylabel("Y axis")
for i in range(n):
    plt.plot(x[i], y[i][0], '^r')

plt.plot(value1,sum,'og',label='new estimated point')
plt.legend(loc='best')
plt.show()
