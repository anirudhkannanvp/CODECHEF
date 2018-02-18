for i in range(int(input())):
    arr=map(int,input().split())
    arr=list(arr)
    sumi1=sum(arr)
    if(sumi1==0):
        print("Beginner")
    elif(sumi1==1):
        print("Junior Developer")
    elif(sumi1==4):
        print("Hacker")
    elif(sumi1==2):
        print("Middle Developer")
    elif(sumi1==3):
        print("Senior Developer")
    else:
        print("Jeff Dean") 