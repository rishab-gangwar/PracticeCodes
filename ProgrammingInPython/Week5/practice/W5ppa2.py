def intializemat(m,n):
  A=[]
  for i in range(m):
    A.append([])
    for j in range(n):
      A[i].append(0)
  return A
def transpose(mat):
  m=len(mat)
  n=len(mat[0])
  transposedmat=intializemat(n,m)
  for i in range(n):
    for j in range(m):
      transposedmat[i][j]=mat[j][i]
  return transposedmat

