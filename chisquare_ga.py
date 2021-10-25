import numpy as np
from geneticalgorithm import geneticalgorithm as ga

#This is a chisquare fit using genetic algorithms in python

# the observed value range min and max
first_line=5.0
last_line=7.0

#the expected value
expe=2.0

# the function definition
def f(X):
    res= np.sqrt(((X-expe)**2)/expe)
    return res

varbound=np.array([[first_line,last_line]]*1)

model=ga(function=f,dimension=1,variable_type='real',variable_boundaries=varbound)

model.run()
