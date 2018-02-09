for _ in range(int(input())):
    n1,m1=input().split()
    n1,m1=int(n1),int(m1)
    minisal=[]
    minisal=list(map(int,input().split()))
    givensal=[]
    joboff=[]
    st=[0]*m1
    for j in range(m1):
        h1,h2=input().split()
        h1,h2=int(h1),int(h2)
        givensal.append(h1)
        joboff.append(h2)
    qualdarr=[]
    for u in range(n1):
        o=list(input())
        qualdarr.append(o)
    ans1=0
    ans2=0
    for i in range(n1):
        expect=int(minisal[i])
        total1=0
        status=0
        for j in range(m1):
            if(int(qualdarr[i][j])==1 and expect<=givensal[j] and joboff[j]!=0):
                total1=max(givensal[j],total1)
        if(total1!=0):
            ans1+=1
            ans2+=total1
            st[givensal.index(total1)]=1
            joboff[givensal.index(total1)]-=1
    ans3=0
    for i in range(m1):
        if(st[i]==0):
            ans3+=1
    print(ans1,ans2,ans3)
