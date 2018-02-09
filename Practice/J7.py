from math import sqrt
for _ in range(int(input())):
    p,s=map(int,input().split())
    l=(p-sqrt(p*p-24*s))
    l/=12
    ans=l*(s/2-l*(p/4-l))
    print(format(ans,'.2f'))
