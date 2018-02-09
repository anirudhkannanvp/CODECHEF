t=int(input())
while(t):
    t=t-1
    n=int(input())
    c=0
    a=list(map(int,input().split()))
    b=[]
    b.append(int(a[0]))
    for i in range(1,len(a)):
        b.append(min(int(a[i]),int(b[i-1])))
    for i in range(0,len(a)):
        if(int(a[i])==int(b[i])):
            c+=1
    print(c)
