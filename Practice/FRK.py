n=int(input())
arr=["ch","he","ef","che","hef","chef"]
c=0
for i in range(n):
    a=str(input())
    for j in range(6):
        if(arr[j] in a):
            c+=1
            break
print(c) 