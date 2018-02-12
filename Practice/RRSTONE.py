n,k=map(int,input().split())
arr=list(map(int,input().split()))
maxi=max(arr)
a=[]
b=[]
for i in range(n):
    a.append(maxi-arr[i])
maxi=max(a)
for i in range(n):
    b.append(maxi-a[i])
if(k==0):
    print(*arr)
elif(k%2==0):
    print(*b)
else:
    print(*a)