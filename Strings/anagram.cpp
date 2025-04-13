//same letters,same count after rearranging
//make freq 0 of every char (s2)

#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2){
    vector <int> freq(26, 0);
    
    if(s1.size() != s2.size()) return false;

    for(int i = 0; i < s1.size(); i++){
        freq[s1[i ] - 'a']++;
        freq[s2[i] - 'a']--;
    }
    for(int i = 0; i < 26; i++){
        if(freq[i] != 0) return false;
    }
    return true;
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    if(isAnagram(s1, s2)){
        cout <<"Etai Anagram Haha" << endl;
    }else{
        cout << "I om sorry, not anagram" << endl;
    }
    return 0;
}


