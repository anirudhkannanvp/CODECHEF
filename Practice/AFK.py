for _ in range(int(input())):
    a,b,c=map(int,input().split())
    co=0
    if((a+c)%2==0):
        print(abs(((a+c)//2)-b))
    else:
        print(min(abs(((a+c+1)//2)-b)+1,abs(((a+c-1)//2)-b)+1)) 