#include"bits/stdc++.h"
using namespace std;
int main()
{
int n,i;
char a[101];
scanf("%[^\n]s",a);
n=strlen(a);
for(i=0;i<n;i++){
/*if((a[i]=='z' && a[i-1]=='a' && a[i+1]=='a') || (a[i]=='z' && a[i-1]=='e' && a[i+1]=='e') || (a[i]=='z' && a[i-1]=='i' && a[i+1]=='i') || ( a[i]=='z' && a[i-1]=='o' && a[i+1]=='o') ||
(
 a[i]=='z' && a[i-1]=='u' && a[i+1]=='u'))
{
i+=1;
continue;
}*/
if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
{
cout<<a[i];
i+=2;
}
else
cout<<a[i];
}
return 0;
}
