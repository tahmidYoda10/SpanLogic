#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Size: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            // Print '*' at borders or at the last row
            if (j == n - (i - 1) || j == n + (i - 1) || i == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
