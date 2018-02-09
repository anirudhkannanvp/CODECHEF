from math import sqrt
t=int(input())
while(t):
    t-=1
    n=int(input())
    ans=99999999999999
    for i in range(1,int(sqrt(n))+5):
        if(n%i==0):
            ans=min(ans,abs(i-n//i))
    print(ans)
