jc,sc,mc=map(int,input().split())
rm=mc-jc
no=rm//sc
if(no&1):
    print("Unlucky Chef")
else:
    print("Lucky Chef")