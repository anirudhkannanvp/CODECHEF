test=input()
test=int(test)
while(test>0):
    test=test-1
    total=0
    answer=-1*1e11
    sum1=0
    n=int(input())
    a=list(map(int,input().split()))
    total=sum(a)
    answer=total
    a.sort(reverse=True)
    sum2=0
    for i in range(0,n,1):
        sum2+=int(a[i])
        answer=max(answer,(sum2*(i+1))+total-sum2)
    print(answer)
