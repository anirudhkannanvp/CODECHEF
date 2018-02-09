t=int(input())
while(t):
    t=t-1
    a=list(map(int,input()))
    a+="1"
    length=len(a)
    k1=length-1
    c1=0
    for i in range(length):
        if(a[i]==1):
            k1=i
            break
    i=k1
    k2=0
    g=1
    while(i!=length-1):
        i+=1
        if(a[i]==1 or i==length-1):
            if(a[k1:i+1].count(0)>0):
                c1+=(i-k1)*(g)
            g+=1
            k2=k1
            k1=i
    print(c1)
