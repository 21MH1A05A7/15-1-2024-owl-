import math
n=int(input())
for i in range(n):
    l=[]
    x=[]
    for i in range(4):
        a,b=map(int,input().split())
        l.append(a)
        x.append(b)
    z=0
    for i in range(len(l)-1):
        for j in range(i+1,len(l)):
            if(l[i]==l[j]):
                x1=(abs(l[j]-l[i]))*(abs(l[j]-l[i]))
                y1=(abs(x[j]-x[i]))*(abs(x[j]-x[i]))
                z=x1+y1
                break
    print(z)