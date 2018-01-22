te=int(input())
for _ in range(te):
    n,k,s=input().split()
    n,k,s=int(n),int(k),int(s)
    capacity=k*s
    availablity=n*s
    availablity-=n*(s//7)
    maans=0
    if(capacity<=availablity):
        answer=0
        counter=0
        for i in range(s):
            counter+=1
            counter%=7
            if(counter!=0):
                maans+=1
                answer+=n
            if(answer>=capacity):
                break
        print(maans)
    else:
        print("-1")
    