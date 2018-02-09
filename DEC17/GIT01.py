for _ in range(int(input())):
    n,m=input().split()
    n,m=int(n),int(m)
    green='G'
    red='R'
    gcost=3
    rcost=5
    arr=[]
    array1=[]
    array2=[]
    gcheck=[]
    rcheck=[]
    i=0
    while(i<m):
        if(i%2==1):
            array1.append(red)
            array2.append(green)
        else:
            array1.append(green)
            array2.append(red)
        i+=1
    i=0
    while(i<n):
        a=list(input())
        arr.append(a)
        if(i%2!=0):
            gcheck.append(array2)
            rcheck.append(array1)
        else:
            gcheck.append(array1)
            rcheck.append(array2)
        i+=1
    cost1=0
    cost2=0
    for k in range(0,n,1):
        for l in range(0,m,1):
            if(arr[k][l]!=gcheck[k][l]):
                if(gcheck[k][l]==green):
                    cost1+=rcost
                else:
                    cost1+=gcost
    for k in range(n):
        for l in range(m):
            if(arr[k][l]!=rcheck[k][l]):
                if(rcheck[k][l]==green):
                    cost2+=rcost
                else:
                    cost2+=gcost
    if(cost1<=cost2):
        print(cost1)
    else:
        print(cost2)
