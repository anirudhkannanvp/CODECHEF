#include<stdio.h>
    #include<string.h>
    int main()
    {
    int t,i,j,st;
    char s,c,c1;
    long int s1,s2;
    scanf("%d",&t);
    char a[100000];
    while(t--)
    {
    st=1;
    s1=0;
    s2=0;
    scanf("%s",a);
    s=a[0];
    for(i=1;a[i]!='\0';i++)
    {
    if(a[i]!=s)
    for(j=i+1;a[j]!='\0';j++)
    {
    if(a[j]!=s)
    {
    st=0;
    break;
    }
    else continue;
    }
    if(st==0)
    break;
    }
    c=a[0];
    c1=a[1];
    for(i=1;a[i]!='\0';i++)
    if(c==a[i])
    s1++;
    s1++;
    if(c!=c1)
    for(i=2;a[i]!='\0';i++)
    if(c1==a[i])
    s2++;
    s2++;
    if(s2==strlen(a)-1)
    st=1;   
    if(s1==strlen(a))
    st=0;
    if(strlen(a)==1)
    st=1;
    if(st==1)
    printf("Yes");
    if(st==0)
    printf("No");
    printf("\n");
    }
    return 0;
    }
