t=int(input())
while(t):
    t=t-1
    n,k=input().split()
    n,k=int(n),int(k)
    d=set()
    st=0
    i=0
    while(i<n):
        i=i+1
        c=set(map(int,input().split()[1:]))
        d|=c
        f=len(d)
        if(f==k and i!=n):
            st=1
            break
    while(i<n):
        i=i+1
        c=input()
    if(f!=k):
        print("sad")
    elif(st==1):
        print("some")
    else:
        print("all")
