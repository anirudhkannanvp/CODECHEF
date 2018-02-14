n,k,p=map(int,input().split())
a=list(map(int,input().split()))
maxdist=[0]*n
reach=[0]*n
reach[0]=1
tarr=[]
for i in range(n):
    temp=[a[i],i]
    tarr.append(temp)
tarr.sort()
for i in range(1,n):
    if(tarr[i][0]-tarr[i-1][0]<=k):
        reach[i]=reach[i-1]
    else:
        reach[i]=reach[i-1]+1
for i in range(n):
    maxdist[tarr[i][1]]=reach[i]
for j in range(p):
    m,n=map(int,input().split())
    m-=1
    n-=1
    if(maxdist[m]==maxdist[n]):
        print("Yes")
    else:
        print("No")