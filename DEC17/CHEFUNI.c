#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
int min(int e1,int e2){
    if(e2>e1)return e1;
    return e2;
}
int minimum(int a1,int a2,int a3,int a4,int a5,int a6,int a7,int a8){
    int minimume=min(a1,min(a2,min(a3,min(a4,min(a5,min(a6,min(a7,a8)))))));
    return minimume;
}
int main(void) {
	int x,y,z,a,b,c,i,j,k,arr[102][103][104],t,a1,a2,a3,a4,a5,a6,a7;
	int lar=999999999;
	scanf("%d",&t);
	while(t--){
	scanf("%d %d %d %d %d %d",&x,&y,&z,&a,&b,&c);
	for(i=0;i<=x;i++){
    for(j=0;j<=y;j++){
    for(k=0;k<=z;k++){
    arr[i][j][k]=lar;
    }
    }
    }
    
    for(i=0;i<=x;i++)
    arr[i][0][0]=a*i;
    for(i=0;i<=x;i++)
    arr[i][0][i]=b*i;
   for(i=0;i<=y;i++)
    arr[0][i][0]=a*i;
    for(i=0;i<=y;i++)
    arr[0][i][i]=b*i;
    for(i=0;i<=z;i++)
    arr[0][0][i]=a*i;
    for(i=0;i<=z;i++)
    arr[i][i][0]=b*i;
    
    for(i=0;i<=x;i++){
    for(j=0;j<=y;j++){
    for(k=0;k<=z;k++){
    a1 = i>=1 ? arr[i-1][j][k]+a : lar;
    a2 = j>=1 ? arr[i][j-1][k]+a : lar;
    a3 = k>=1 ? arr[i][j][k-1]+a : lar;
    a4 = i>=1 && j>=1 ? arr[i-1][j-1][k]+b : lar;
    a5 = i>=1 && k>=1 ? arr[i-1][j][k-1]+b : lar;
    a6 = j>=1 && k>=1 ? arr[i][j-1][k-1]+b : lar;
    a7 = i>=1 && j>=1 && k>=1 ? a7=arr[i-1][j-1][k-1]+c : lar;
    arr[i][j][k]=minimum(a1,a2,a3,a4,a5,a6,a7,arr[i][j][k]);
    }
    }
    }
     printf("%d\n",arr[x][y][z]);  
	}
	return 0;
}
