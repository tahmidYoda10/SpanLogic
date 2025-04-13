#include <iostream>
#include <string>
using namespace std;

int findMaxConsecutiveOnes(string s, int k) {
    int maxLen = 0, start = 0, zeroCount = 0;

    for (int end = 0; end < s.length(); end++) {
        if (s[end] == '0') {
            zeroCount++;
        }

        while (zeroCount > k) {
            if (s[start] == '0') {
                zeroCount--;
            }
            start++;
        }

        maxLen = max(maxLen, end - start + 1);
    }

    return maxLen;
}

int main() {
    string s;
    int k;

    cout << "Enter binary string: ";
    cin >> s;

    cout << "How many 0s you can flip: ";
    cin >> k;

    cout << "Maximum consecutive 1s: " << findMaxConsecutiveOnes(s, k) << endl;

    return 0;
}
