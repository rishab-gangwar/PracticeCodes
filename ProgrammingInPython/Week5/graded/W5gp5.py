def is_magic(mat):
    dim=len(mat)
    rows=[]
    cols=[]
    leftd=0
    rightd=0
    for i in range(dim):
        csum=0
        rsum=0
        for j in range(dim):
            rsum+=mat[i][j]
            csum+=mat[j][i]
            if i==j:
                leftd+=mat[j][i]
            if i==(dim-j-1):
                rightd+=mat[i][j]
                
        rows.append(rsum)
        cols.append(csum)
    if (rows==cols) and (rows[0] == leftd == rightd) :
        return "YES"
    else:
        return "NO"