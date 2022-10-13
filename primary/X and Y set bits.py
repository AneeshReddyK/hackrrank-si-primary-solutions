t=int(input())
for i in range(t):
    x,y=map(int,input().strip().split())
    r=((1<<x)|(1<<y))%1000000007
    print(r) 