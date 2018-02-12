t=int(input())
while(t):
    t-=1
    a=str(input())
    length=len(a)
    ans=1+length
    buff=a[0]
    for i in range(1,length):
        if(ord(a[i])>=ord(buff)):
            ans+=ord(a[i])-ord(buff)
        else:
            ans+=ord(a[i])-ord(buff)+26
        buff=a[i]
    if(ans<=length*11):
        print("YES")
    else:
        print("NO") 