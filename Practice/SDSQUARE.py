t=int(input())
arr=[]
for i in range(10**5+5):
    te=str(i*i)
    st=0
    for j in range(len(te)):
        if(te[j]!='1' and te[j]!='4' and te[j]!='9' and te[j]!='0'):
            st=1
            break
    if(st==0):
        arr.append(i*i)
#print(arr)
length=len(arr)
while(t):
    t-=1
    a,b=map(int,input().split())
    ans=0
    for i in range(length):
        if(arr[i]>=a and arr[i]<=b):
            ans+=1
    print(ans)