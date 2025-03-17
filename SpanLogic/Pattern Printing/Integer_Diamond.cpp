#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,r,c;
    cin>>n;
    for(r=1;r<=n;r++){
        for(c=1;c<=n-r;c++){
            cout<<" ";
        }
        for(c=1;c<=2*r-1;c++){
            cout<<char(c)+64;
        }
        cout<<endl;
    }
    for(r=n-1;r>=1;r--){
        for(c=1;c<=n-r;c++){
            cout<<" ";
        }
        for(c=1;c<=2*r-1;c++){
            if(c<=r){
                cout<<c;
            }else{
                cout<<2*r-c;
            }
        }
        cout<<endl;
    }
    return 0;
}