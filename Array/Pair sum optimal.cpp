#include<iostream>
#include<vector>
using namespace std;

vector<int> s(vector<int>& arr, int t) {
    vector<int> ans;
    int n = arr.size();
    int i=0,j=n-1;
    while(i<j){
        int s = arr[i] + arr[j];
        if(s>t){
            j--;
        }else if(s<t){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}
            

int main() {
    vector<int> n = {2, 7, 11, 14};
    int t = 9;
    vector<int> ans = s(n, t);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
