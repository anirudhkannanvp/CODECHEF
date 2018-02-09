for _ in range(int(input())):
    no=input()
    no=int(no)
    arr=map(int,input().split())
    arr=list(arr)
    st=0
    if(no==1 and st==0):
        print(no-1)
        ansarr=[]
        ansarr.append(arr[0])
        print(*ansarr)
        st=1
    elif(no==2 and st==0):
        if(arr[1]==arr[0]):
            print(no-2)
            ansarr=[]
            ansarr.append(arr[0])
            ansarr.append(arr[1])
            print(*ansarr)
            st=1
        else:
            print(no)
            ansarr=[]
            ansarr.append(arr[1])
            ansarr.append(arr[0])
            print(*ansarr)
            st=1
    elif(no==3 and st==0):
        if(arr[0]==arr[2] or arr[0]==arr[1] or arr[2]==arr[1]):
            print("2")
            ansarr=[]
            ansarr.append(arr[2])
            ansarr.append(arr[0])
            ansarr.append(arr[1])
            print(*ansarr)
            st=1
        else:
            print("3")
            ansarr=[]
            ansarr.append(arr[1])
            ansarr.append(arr[2])
            ansarr.append(arr[0])
            print(*ansarr)
            st=1
    elif(no==4 and st==0):
        print("4")
        ansarr=[]
        for i in range(no):
            ansarr.append(-5)
        if(len(set(arr))==no):
            ansarr=arr[::-1]
            print(*ansarr)
            st=1
        else:
            ansarr=[]
            for i in range(no):
                ansarr.append(-5)
            if(arr[2]==arr[3]):
                ansarr[0],ansarr[1],ansarr[2],ansarr[3]=arr[3],arr[2],arr[1],arr[0]
                print(*ansarr)
                st=1
            else:
                temp2=[]
                for i in range(4):
                    temp2.append(arr[i])
                poin=0
                element=temp2[poin]
                while(poin!=no):
                    element=temp2[poin]
                    for j in range(no):
                        if(arr[j]!=element and ansarr[j]==-5):
                            ansarr[j]=element
                            poin+=1
                            break
                print(*ansarr)
                st=1
    else:
        print(no)
        ansarr=[]
        for i in range(no):
            ansarr.append(-5)
        rep=[]
        temp=arr[no-1]
        for j in range(no-1):
                ansarr[j+1]=arr[j]
                if(arr[j]==arr[j+1]):
                    rep.append(j+1)
        if(arr[0]==arr[no-1]):
            rep.append(0)
        ansarr[0]=temp
        repc=len(rep)
        if(repc>0):
            if(repc==1):
                for x in range(no):
                    if(rep[0]!=x):
                        temp=x
                        break
                if(rep[0]==no-1):
                    temp+=1
                ansarr[temp],ansarr[rep[0]]=ansarr[rep[0]],ansarr[temp]
            elif(len(rep)==2):
                ansarr[rep[1]],ansarr[rep[0]]=ansarr[rep[0]],ansarr[rep[1]]
            else:
                for i in range(len(rep)-1):
                    h2=rep[i+1]
                    h1=rep[i]
                    ansarr[h1],ansarr[h2]=ansarr[h2],ansarr[h1]
        print(*ansarr)
