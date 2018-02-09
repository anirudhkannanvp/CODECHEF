t=int(input())
while(t):
    t=t-1
    a,b=input().split()
    a,b=int(a),int(b)
    p=min(a,b)
    q=max(a,b)
    st=0
    if(p%2==0 and q%2==0 and q==p+2):
        st=1
    elif(p%2==0 and q%2==1):
        st=2
    elif(p%2==1 and q%2==1 and q==p+2):
        st=3
    elif(p%2==1 and q%2==0 and q==p+1):
        st=3
    if(st%2==1):
        print("YES")
    else:
        print("NO")
