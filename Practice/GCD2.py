def gcd1(a,b):
    if(b==0):
        return a
    else:
        return gcd1(b,a%b)
t=int(input())
while(t):
    t-=1
    a,b=map(int,input().split())
    print(gcd1(b,a))
