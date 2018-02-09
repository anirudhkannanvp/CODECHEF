test=int(input())
for y in range(test):
    k,dig0,dig1=input().split()
    k,dig0,dig1=int(k),int(dig0),int(dig1)
    sum1=dig0+dig1
    for i in range(3,k+2):
        y=sum1%10
        sum1+=y
        if(y==2):
            ter1=((k-i)//4)
            ter1*=20
            sum1+=ter1
            ter=k-i
            if(ter%4==3):
                sum1+=18
            elif(ter%4==2):
                sum1+=12
            elif(ter%4==1):
                sum1+=4
            break
        if(y==0):
            break
    if(sum1%3==0):
        print("YES")
    else:
        print("NO")
