def avg(L):
  sum=0
  for i in L:
    sum+=i
  return sum/len(L)
def subFromList(L,a):
  for i in range(len(L)):
    L[i]=L[i]-a
  return L
def matmul(x,y):
  mulL=[]
  for i in range(len(x)):
    mulL.append(x[i]*y[i])
  return mulL
def pearson_correlation(X,Y):
  if len(X)!=len(Y):
    return 0.0
  mean1=avg(X)
  mean2=avg(Y)
  zeromeanX=subFromList(X,mean1)
  zeromeanY=subFromList(Y,mean2)
  X_sq=(avg(matmul(zeromeanX,zeromeanX)))**(.5)
  Y_sq=(avg(matmul(zeromeanY,zeromeanY)))**(.5)
  numerator=avg(matmul(zeromeanX,zeromeanY))
  return round(numerator/(X_sq*Y_sq),1)

