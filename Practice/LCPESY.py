t=int(input())
while(t):
    t-=1
    a1=str(input())
    a2=str(input())
    c1=[0]*256
    c2=[0]*256
    for i in range(len(a1)):
        c1[ord(a1[i])]+=1
    for i in range(len(a2)):
        c2[ord(a2[i])]+=1
    ans=0
    for i in range(256):
        ans+=min(c1[i],c2[i])
    print(ans)