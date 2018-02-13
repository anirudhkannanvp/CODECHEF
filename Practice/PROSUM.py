t=int(input())
while(t):
    t-=1
    n=int(input())
    a=list(map(int,input().split()))
    no2=0
    nog2=0
    for i in range(n):
        if(a[i]==2):
            no2+=1
        elif(a[i]>2):
            nog2+=1
    ans=no2*nog2+(nog2*(nog2-1))//2
    print(ans)