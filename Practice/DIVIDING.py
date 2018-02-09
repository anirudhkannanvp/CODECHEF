n=int(input())
a=list(map(int,input().split()))
if(sum(a)==(n*(n+1))//2):
    print("YES")
else:
    print("NO")
