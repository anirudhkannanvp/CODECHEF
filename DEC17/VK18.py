oddarr=[0]*2000219
evenarr=[0]*2000219
diff=[0]*2000219
sudiff=[0]*2000219
oddarr[0]=0
evenarr[0]=1
for i in range(1,10,1):
    oddnow=0
    evennow=0
    if(i%2==0):
        evennow=i
    else:
        oddnow=i
    oddarr[i]=oddnow
    evenarr[i]=evennow
    diff[i]=abs(oddarr[i]-evenarr[i])
for i in range(10,2000219):
    ele=i%10
    oddnow=oddarr[i//10]
    evennow=evenarr[i//10]
    if(ele%2==0):
        evennow+=ele
    else:
        oddnow+=ele
    oddarr[i]=oddnow
    evenarr[i]=evennow
    diff[i]=abs(oddarr[i]-evenarr[i])
sudiff[0]=0
sudiff[1]=2
for i in range(2,2000219):
    sudiff[i]=sudiff[i-1]+diff[i]
ansarr=[0]*2000219
ansarr[0]=0
ansarr[1]=2
for i in range(2,1000109):
    ansarr[i]=ansarr[i-1]+2*(sudiff[2*i]-sudiff[i])-diff[2*i]
for _ in range(int(input())):
    n=int(input())
    print(ansarr[n])
