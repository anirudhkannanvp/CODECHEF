#include"bits/stdc++.h"
using namespace std;
int t,c,i;
char a[100];
int main()
{
scanf("%d",&t);
while(t--){
c=0;
scanf("%s",a);
for(i=0;i<strlen(a);i++){
if(a[i]=='A' || a[i]=='D' || a[i]=='O' ||a[i]=='P' ||a[i]=='Q' ||a[i]=='R' ||a[i]=='B')
c++;
if(a[i]=='B')
c++;
}
printf("%d\n",c);
}
return 0;
}
