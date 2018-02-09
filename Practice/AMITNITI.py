def func(sum1,no,arr):
    if(sum1==0):
        return True
    if(no<0):
        return False
    if(sum1>=arr[no]+arr[no-1]):
        return func(sum1-arr[no]-arr[no-1],no-2,arr)
    if(sum1>=arr[no]):
        temp1=func(sum1-arr[no],no-2,arr)
        temp2=func(sum1-arr[no-1],no-2,arr)
        return temp1 or temp2
    if(sum1>=arr[no-1]):
        return func(sum1-arr[no-1],no-2,arr)
    return func(sum1,no-2,arr)
t=int(input())
arr=[]
arr.append(2)
arr.append(7)
for i in range(2,1000):
    if(i%2==1):
        arr.append(arr[i-1]+7)
    else:
        arr.append(arr[i-1]+3*arr[i-2])
#print(arr)
while(t):
    t-=1
    n=int(input())
    if(func(n,999,arr)):
        print("YES")
    else:
        print("NO")
