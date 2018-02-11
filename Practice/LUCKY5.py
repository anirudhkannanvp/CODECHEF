t=int(input())
while(t):
    t-=1
    c=0
    i=input().strip()
    for j in i:
        if(j!='4' and j!='7'):
            c+=1
    print(c) 