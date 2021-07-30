import numpy as np
import matplotlib.pyplot as plt
f=open("score.csv",mode='r')
f.readline()
lines=f.readlines()
X=[]
Y=[]
for i in lines:
  m=i.split(',')
  X.append(int(m[0]))
  Y.append(int(m[1]))
plt.scatter(X,Y)
plt.show()
