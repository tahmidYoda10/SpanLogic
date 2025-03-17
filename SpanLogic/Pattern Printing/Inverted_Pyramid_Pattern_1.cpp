/*Author : Tahmid Al Mamun*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
/*Note : if you want to print 1111 222 333 cout "i"
if you want to print 12345 1234 123 cout "j"
if you want to print 55555 4444 333 cout "n+i-1"*/