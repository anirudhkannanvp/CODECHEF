fir1=[]
fir2=[]
for k in range(26):
    fir1.append(0)
    fir2.append(0)
for _ in range(int(input())):
    fir=list(input())
    sec=list(input())
    emp=[]
    ans=0
    for j in range(26):
        fir1[j]=0
        fir2[j]=0
    for j in range(len(fir)):
        fir1[ord(fir[j])-ord('a')]+=1
        fir2[ord(sec[j])-ord('a')]+=1
    for i in range(26):
        emp.append([fir1[i],fir2[i]])
    firstst=0
    secondst=0
    emp.sort(reverse=True)
    for k in range(26):
        if(emp[k][0]!=0 and emp[k][1]==0):
            firstst+=1
        if(emp[k][0]==0 and emp[k][1]!=0):
            secondst+=1
    mainst=1
    for j in range(26):
        if(emp[j][0]!=0 and emp[j][1]==0):
            if(emp[j][0]==1):
                mainst=23
                if(secondst==0):
                    mainst=0
                break
            else:
                mainst=0
                break
        if(mainst!=1):
            break
    if(mainst==1 or mainst==23):
        print('B')
    else:
        print('A')
