dp=[0]*(10000002)
dp[0]=0
dp[1]=2
dp[2]=5
for i in range(3,10000002):
    dp[i]=dp[i-2]+i+i+1
t=int(input())
while(t):
    t-=1
    n=int(input())
    print(dp[n])
    