#include "bits/stdc++.h"
using namespace std;
char a[1000][1000],b[100];
int main()
{
	int t,h,w,i,j,st;
	cin>>t;
	while(t--){
		st=1;
		cin>>h>>w;
		for(j=0;j<w;j++)b[j]='B';
		for(i=0;i<h;i++)cin>>a[i];
		for(i=0;i<h-1;i++){
			for(j=0;j<w;j++){
				if(a[i][j] =='B' && a[i+1][j]!='B'){cout<<"no"<<endl;st=0;break;}
		}
		if(st==0)break;}
		if(st==1){
		for(i=0;i<h-1;i++){
			for(j=0;j<w;j++){
				if((a[i][j] =='W' && a[i+1][j]=='A' )){cout<<"no"<<endl;st=0;break;}
			}
			if(st==0)break;}}
					if(st==1){
 
			for(i=0;i<h;i++){
			for(j=0;j<w;j++){
				if((a[i][j] =='W' && a[i][j+1]=='A' && j!=w-1)|| (a[i][j] =='W' && a[i][j-1]=='A' && j!=0) ){cout<<"no"<<endl;st=0;break;}
			}
			if(st==0)break;}}
								if(st==1){
 
		for(i=0;i<h;i++){
			for(j=0;j<w;j++){
				if((j==0 || j==w-1) && (a[i][j]=='W')){cout<<"no"<<endl;st=0;break;}
			}
			if(st==0)break;}}
 
		if(st==1){cout<<"yes"<<endl;}
	}
	return 0;
}
