for _ in range(int(input())):
    t=str(input())
    s=str(input())
    c=0
    for i in range(len(s)):
        temp=s[i]
        if(temp in t):
            c+=1
    print(c)
