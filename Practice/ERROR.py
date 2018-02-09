for _ in range(int(input())):
    s=str(input())
    c1="010"
    c2="101"
    if(c1 in s or c2 in s):
        print("Good")
    else:
        print("Bad")
