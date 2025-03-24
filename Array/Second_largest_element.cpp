#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for( int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int mx = INT_MIN;
    int second_mx = INT_MIN;

    for( int i = 0; i < n; i++){
        if ( mx < arr[i] ){
            mx = arr[i];
        }
    }

    for( int i = 0; i < n; i++){
        if ( arr[i] != mx && second_mx < arr[i]){
            second_mx = arr[i];
        }
    }
    cout << second_mx << endl;
    return 0;
}