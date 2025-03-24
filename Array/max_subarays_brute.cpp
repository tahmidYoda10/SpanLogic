#include <iostream>
#include <vector>
#include <climits> // For INT_MIN
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int maxs = INT_MIN; // Initialize maxs with the smallest possible integer

    for (int st = 0; st < n; st++) {
        for (int end = st; end < n; end++) {
            int cs = 0; // Current sum starts from 0 for each subarray
            for (int i = st; i <= end; i++) { // i goes from start to end of the subarray
                cs += arr[i]; // Add each element to the current sum
            }
            maxs = max(cs, maxs); // Update the maximum sum if current sum is greater
        }
    }

    cout << "Maximum subarray sum: " << maxs << endl; // Print the result
    return 0;
}
