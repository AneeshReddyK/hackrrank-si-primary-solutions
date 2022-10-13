def findMissingNumber(ar,n):
    m=0
    p=0
    for i in range(len(ar)):
        m=m^ar[i]
    for j in range(1,len(ar)+2):
        p=p^j
    c=m^p
    print(c)
a=int(input())
for i in range(a):
    b = int(input())
    ar=list(map(int, input().split()))[:b]
    findMissingNumber(ar,b)