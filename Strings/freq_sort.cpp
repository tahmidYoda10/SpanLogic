#include<bits/stdc++.h>
using namespace std;

string countSort(string s){
    vector <int> freq(26, 0);
    
    //store freequencies
    for(int i = 0; i < s.size(); i++){
        int idx = s[i] - 'a';
        freq[idx]++;
    }

    //create sorted string
    int j = 0;
    for(int i = 0; i < 26; i++){
        while(freq[i]--){
            s[j++] = i + 'a';
        }
    }
    return s;
}

int main(){
    string s;
    cin >> s;

    string sorted_string = countSort(s);
    
    cout << sorted_string << endl;
}