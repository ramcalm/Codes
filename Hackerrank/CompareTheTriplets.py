c=input().split()
d=input().split()
a=[0,0,0]
b=[0,0,0]
for i in range(3):
    a[i]=int(c[i])
    b[i]=int(d[i])
c1=c2=0
for i in range(3):
    if(a[i]>b[i]):
        c1+=1
    if(a[i]<b[i]):
        c2+=1
print(c1,c2,end='')