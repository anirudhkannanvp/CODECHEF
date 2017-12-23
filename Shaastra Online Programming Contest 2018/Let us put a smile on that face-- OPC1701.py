t=int(input())
while(t):
    t-=1
    n,m=list(map(int,input().split()))
    a=input().split()
    for i in a:
        i=list(i)
    #print(a)
    count=0
    for i in range(1,n):
        if(len(set(a[i])&(set(a[i-1])))==0):
            count+=1
    if(count<=m):
        print("Welcome to a world without rules")
    else:
        print("Very poor choice of words") 