#include<bits/stdc++.h>
using namespace std;

string isPref(vector<string> &str) {
    string s1 = str[0];
    int len = s1.size();

    for (int i = 1; i < str.size(); i++) {
        int j = 0;
        while (j < len && j < str[i].size() && s1[j] == str[i][j]) {
            j++;
        }
        len = min(len, j);
    }

    return s1.substr(0, len);
}

int main() {
    int n;
    cout << "Koyta string lagbe ? ";
    cin >> n;

    cout << "Stirng de : ";
    vector<string> str(n);
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    cout << "Longes common prefix is : " << isPref(str) << endl;

    return 0;
}
