#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    long long int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(b==0)
            cout<<"0 "<<a<<"\n";
        else
        cout<<a/b<<" "<<a-(a/b)*b<<"\n";
    }
    return 0;
}
