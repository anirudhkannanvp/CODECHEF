t=int(input())
while(t):
    t=t-1
    a,b=input().split()
    a,b=int(a),int(b)
    c=list(map(int,input().split()))
    st=0
    d=[0,0,0,0,0,0,0,0,0,0]
    if(c==d):
        print(b-a+1)
        st=1
    if(st==0):
        c1=0
        for i in range(a,b+1):
            temp=i
            while(temp!=0):
                rem=int(temp%10)
                temp//=10
                d[rem]+=1
            for i in range(10):
                if(c[i]==d[i]):
                    c1+=1
                    break
            d=[0,0,0,0,0,0,0,0,0,0]
        print(b-a-c1+1)
