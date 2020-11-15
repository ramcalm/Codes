def diagonalDifference(arr):
    s1=0
    s2=0
    r=len(arr)
    c=len(arr[0])
    for i in range(r):
        for j in range(c):
            if i==j:
                s1+=arr[i][j]
            if i+j==r-1:
                s2+=arr[i][j]
    return abs(s1-s2)

n=int(input())
a=[]
for i in range(n):
    lt=input().split()
    lt1=[]
    for j in lt:
        lt1.append(int(j))
    a.append(lt1)
print(diagonalDifference(a),end='')