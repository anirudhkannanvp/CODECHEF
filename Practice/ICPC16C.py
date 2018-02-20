t=int(input())
while(t):
    t-=1
    n=int(input())
    if(n==9):
        print("1")
    else:
        print(n%9+1) 