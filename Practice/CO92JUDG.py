t=int(input())
while(t):
    t-=1
    n=int(input())
    a1=list(map(int,input().split()))
    a2=list(map(int,input().split()))
    s1=sum(a1)-max(a1)
    s2=sum(a2)-max(a2)
    if(s1<s2):
        print("Alice")
    elif(s1>s2):
        print("Bob")
    else:
        print("Draw")