t=int(input())
while(t):
    t=t-1
    a=[]
    b=[]
    d=[]
    c1=[]
    n,m=input().split()
    n,m=int(n),int(m)
    for i in range(n):
        c1.append(0)
    c=list(input().split())
    for i in range(len(c)):
        c1[int(c[i])-1]-=1
    st=1
    for i in range(n):
        j=i+1
        if(c1[i]!=-1 and st==1):
            b.append(i+1)
            st*=-1
            continue
        elif(c1[i]!=-1 and st==-1):
            d.append(i+1)
            st*=-1
            continue
    for i in b:
        print(i,end=" ")
    print()
    for i in d:
        print(i,end=" ")
    print()
