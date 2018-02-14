n,m=map(int,input().split())
coun=dict()
chef=dict()
countc=dict()
for i in range(n):
    a,b=input().split()
    coun[a]=b
    chef[a]=0
    countc[b]=0
for i in range(m):
    a=input()
    chef[a]-=1
    countc[coun[a]]-=1
chefans=min(chef.items(),key=lambda x: (x[1],x[0]))
countryans=min(countc.items(),key = lambda x: (x[1],x[0]))
print(countryans[0])
print(chefans[0])

