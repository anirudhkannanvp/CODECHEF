mod=1000000007
for test in range(int(input())):
    n,m=input().split()
    n,m=int(n),int(m)
    fir=[]
    sec=[]
    for i in range(n):
        fir.append(0)
    for i in range(m):
        sec.append(1)
    m1=m
    mai=[]
    for i in range(m1):
        co,l,r=input().split()
        co,l,r=int(co),int(l),int(r)
        mai.append([co,l-1,r-1])
    i=m1-1
    while(i>=0):
        co,l,r=int(mai[i][0]),int(mai[i][1]),int(mai[i][2])
        if(co==2):
            for j in range(l,r+1,1):
                sec[j]+=sec[i]
            sec[i]=0
        i-=1
    i=0
    while(i<m1):
        co,l,r=int(mai[i][0]),int(mai[i][1]),int(mai[i][2])
        if(co==1):
            fir[l]+=sec[i]
            if(r<=n-2):
                fir[r+1]-=sec[i]
        i+=1
    for i in range(1,n):
        fir[i]+=fir[i-1]
        fir[i]%=mod
    for i in range(n):
        fir[i]%=mod
    for i in range(n):
        print(fir[i],end=" ",sep=" ")
    print() 