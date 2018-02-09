t=int(input())
while(t):
    t=t-1
    n=int(input())
    a=list(map(int,input().split()))
    st=0
    a.sort()
    if(int(a[1])-int(a[0])!=1):
        st=1
        print(int(a[0]))
    else:
        for j in range(1,n-1):
            if(int(a[j+1])!=int(a[j])+1):
                st=1
                print(a[j+1])
                break
    if(st==0):
        print(a[n-1])
