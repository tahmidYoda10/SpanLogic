//substr() is used to get a sub string from the main string. To obtain this we need to give s.substr(position, length)

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    cout << s.substr(0, 4);
    return 0;
}