#include<bits/stdc++.h>
using namespace std;

bool isIso1(string s1, string s2){
    vector <int> v1(128, -1);
    vector <int> v2(128, -1);

    if(s1.size() != s2.size()) return false;

    for(int i = 0; i < s1.size(); i++){
        if((v1[s1[i]] != v2[s2[i]])){
            return false;
        }
        v1[s1[i]] = v2[s2[i]] = i;
    }
    return true;
}

bool isIso2(string s1, string s2) {
    if (s1.length() != s2.length()) return false;

    unordered_map<char, char> map1, map2;

    for (int i = 0; i < s1.length(); i++) {
        char c1 = s1[i];
        char c2 = s2[i];

        // If there is a mismatch in mapping
        if ((map1.count(c1) && map1[c1] != c2) ||
            (map2.count(c2) && map2[c2] != c1)) {
            return false;
        }

        map1[c1] = c2;
        map2[c2] = c1;
    }
    return true;
}


int main(){
    string s1, s2;
    cin >> s1 >> s2;

    if(isIso1(s1, s2)){
        cout << "Amra Isomporphic" << endl;
    }else{
        cout << "Hell neh bro" << endl;
    }
}