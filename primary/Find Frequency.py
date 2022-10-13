n=int(input())
l=list(map(int,input().split()))
d={}
for k in l:
    if(k in d):
        d[k]+=1
    else:
        d[k]=1
q=int(input())
for j in range(q):
    x=int(input())
    if(x in d):
        print(d[x])
    else:
        print(0)