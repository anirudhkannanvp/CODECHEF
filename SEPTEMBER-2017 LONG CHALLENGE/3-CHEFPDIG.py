for test in range(int(input())):
    a=input()
    a1=list(a)
    che=[0]*10
    ch1=0
    ch2=0
    for i in range(len(a1)):
        che[int(a1[i])]+=1
    i=65
    while(i<=90):
        temp=str(i)
        r=chr(i)
        temp1=list(temp)
        if(temp[0]==temp[1]):
            ch1=int(temp[1])
            if(che[ch1]>=2):
                print(r,end = "",sep="")
        else:
            ch1=int(temp[1])
            ch2=int(temp[0])
            if(che[ch1]>0 and che[ch2]>0):
                print(r,end="",sep="")
        i+=1
    print() 