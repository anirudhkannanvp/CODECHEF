def sumd(a1):
    c=0
    a=a1
    while(a!=0):
        c+=int(a%10)
        a//=10
    return c
n=int(input())
ans=0
for i in range(n-97,n+1):
    if(i+sumd(i)+sumd(sumd(i))==n):
        ans+=1
print(ans)