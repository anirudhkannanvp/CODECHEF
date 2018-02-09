for _ in range(int(input())):
    st=0
    check=[0]*26
    a=list(input())
    for i in range(len(a)):
        if(check[ord(a[i])-ord('a')]!=0):
            st=1
            break
        check[ord(a[i])-ord('a')]+=1
    if(not st):
        print("no")
    else:
        print("yes")
