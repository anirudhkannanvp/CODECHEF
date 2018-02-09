import sys
for arrar in sys.stdin:
    a1=0
    a2=0
    str1="TEAM-A"
    str2="TEAM-B"
    str3="TIE"
    c1=10
    dum=0
    c2=len(arrar)
    arrar1=arrar[c1:c2]
    if(arrar.count('1')==c2):
        dum=4
        print(str3,end=" ",sep=" ")
    elif(arrar.count('0')==c2):
        dum=3
        print(str3,end=" ",sep=" ")
    else:
        for i in range(0,c1,1):
            if(i%2==1):
                if(arrar[i]=='1'):
                    a2+=1
                    dum+=1
            else:
                if(arrar[i]=='1'):
                    a1+=1
                    dum=2
        if(a1==a2 and arrar1.count('1')==0):
            print(str3,end=" ",sep=" ")
        elif(a2==a1 and arrar1.count('1')!=0):
            wa1=0
            dum+=3
            wb1=0
            tie=-1
            team1=-1
            team2=-1
            for i in range(c1,c2):
                if(wa1==1 and wb1==1):
                    wa1=0
                    dum+=9
                    wb1=0
                    tie=i+1
                    team1=-1
                    team2=-1
                if(wa1>1 and wb1==0):
                    team1=i+1
                    team2=-1
                    break
                if(wb1>=1 and wa1==0):
                    team2=i+1
                    team1=-1
                    break
                if(i%2!=1):
                    dum-=4
                    if(arrar[i]=='1'):
                        wa1+=1
                        dum+=2
                        continue
                    if(wb1>=1 and wa1==0):
                        team2=i+1
                        team1=-1
                        dum=0
                        break
                if(i%2==1):
                    if(arrar[i]=='1'):
                        wb1+=1
                        continue
                    if(wa1>=1 and wb1==0):
                            team1=i+1
                            team2=-1
                            dum=2
                            break
                if(wa1==1 and wb1==1):
                    wa1=0
                    dum=3
                    wb1=0
                    dum+=2
                    tie=i+1
                    team1=-1
                    team2=-1
                if(wa1>1 and wb1==0):
                    team1=i+1
                    dum+=3
                    team2=-1
                    break
                if(wb1>1 and wa1==0):
                    team2=i+1
                    team1=-1
                    break
            if(team1>c2):
                team1=c2
            if(team2>c2):
                team2=c2
            if(team1!=-1 and team2==-1):
                print(str1,team1,end=" ",sep=" ")
            elif(team2!=-1 and team1==-1):
                print(str2,team2-1,end=" ",sep=" ")
            else:
                if(wb1>wa1):
                    print(str2,"20",end=" ",sep=" ")
                else:
                    print(str3,end=" ",sep=" ")
        else:
            ad=0
            du=0
            for i in range(c1):
                if(i%2!=1):
                    if(arrar[i]=='1'):
                        ad+=1
                else:
                    if(arrar[i]=='1'):
                        du+=1
                if(du==3 and ad==0 and i==5):
                    print(str2,i+1,end=" ",sep=" ")
                    break
                elif(ad==3 and du==0 and i==5):
                    print(str1,i+1,end=" ",sep=" ")
                    break
                elif(ad==4 and du<=1 and i==6):
                    print(str1,i+1,end=" ",sep=" ")
                    break
                elif(ad==3 and du<=0 and i==6):
                    print(str1,i+1,end=" ",sep=" ")
                    break
                elif(du==3 and ad<=1 and i==6):
                    print(str2,i+1,end=" ",sep=" ")
                    break
                elif(du==2 and ad<=0 and i==6):
                    print(str2,i+1,end=" ",sep=" ")
                    break
                elif(i==5 and ad-du>=3):
                    print(str1,i+1,end=" ",sep=" ")
                    break
                elif(i==5 and du-ad>=3):
                    print(str2,i+1,end=" ",sep=" ")
                    break    
                elif(i==6 and ad-du>3):
                    print(str1,i+1,end=" ",sep=" ")
                    break
                elif(i==6 and du-ad>=3):
                    print(str2,i+1,end=" ",sep=" ")
                    break
                elif(i==7 and ad-du>=2):
                    print(str1,i+1,end=" ",sep=" ")
                    break
                elif(i==7 and du-ad>=2):
                    print(str2,i+1,end=" ",sep=" ")
                    break
                elif(i==8 and ad-du>1):
                    print(str1,i+1,end=" ",sep=" ")
                    break
                elif(du-ad>=1 and i==8):
                    print(str2,i+1,end=" ",sep=" ")
                    break
                elif(i==9 and ad>du):
                    print(str1,i+1,end=" ",sep=" ")
                    break
                elif(i==9 and du>ad):
                    print(str2,i+1,end=" ",sep=" ")
                    break
    print()
