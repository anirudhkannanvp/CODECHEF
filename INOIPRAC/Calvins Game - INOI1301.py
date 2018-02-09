n,k=map(int,input().split())
a=list(map(int,input().split()))
arr=[-999999999999999]*n
k-=1
if(k+1<n):
    arr[k+1]=a[k+1]
if(k+2<n):
    arr[k+2]=max(a[k+2],arr[k+1]+a[k+2])
for i in range(k+3,n):
    arr[i]=max(arr[i],arr[i-2]+a[i],arr[i-1]+a[i])
arr[n-2]=max(arr[n-1]+a[n-2],arr[n-2])
for i in range(n-3,k,-1):
    arr[i]=max(arr[i],arr[i+2]+a[i],arr[i+1]+a[i])
if(k==n-1):
    arr[n-2]=a[n-2]
    arr[n-1]=0
if(k==n-2):
    arr[n-1]=a[n-1]
    arr[n-2]=max(0,arr[n-1]+a[n-2])
if(arr[k]<0):
    arr[k]=0
for i in range(min(k,n-3),-1,-1):
    arr[i]=max(arr[i],arr[i+2]+a[i],arr[i+1]+a[i])
#print(arr)
print(arr[0]) 
