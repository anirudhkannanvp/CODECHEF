t=int(input())
while(t):
    t-=1
    n=int(input())
    arr=[]
    smile=[]
    no=[]
    ans=0
    for i in range(n):
        s=list(input().split())
        s1=str(input())
        if(s1=="yes"):
            for j in range(len(s)):
                #print(smile)
                smile.append(s[j])
        elif(s1=="no"):
            for j in range(len(s)):
                no.append(s[j])
    smile=list(set(smile))
    no=list(set(no))
    for j in range(len(smile)):
        if(smile[j] in no):
            continue
        else:
            ans+=1
    print(ans) 