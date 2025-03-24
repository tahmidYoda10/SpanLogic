#include<iostream>
#include<vector>
using namespace std;

vector<int> s(vector<int>& arr, int t) {
    vector<int> ans;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == t) {
                ans.push_back(i);  
                ans.push_back(j);
            }
        }
    }
    return ans;
}

int main() {
    vector<int> n = {2, 7, 11, 14};
    int t = 18;
    vector<int> ans = s(n, t);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
