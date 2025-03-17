#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an odd size: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Please enter an odd number for a symmetrical cross." << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Print '*' at the main diagonal and anti-diagonal
            if (j == i || j == (n - i + 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
