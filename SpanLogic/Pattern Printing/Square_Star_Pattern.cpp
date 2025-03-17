/* Square Star Pattern
   Author: Tahmid Al Mamun */

   #include <bits/stdc++.h>
   using namespace std;
   
   int main() {
       int size;
       cin >> size;
   
       for (int row = 1; row <= size; row++) {
           for (int col = 1; col <= size; col++) {
               if (col == 1 || col == size || row == 1 || row == size) {
                   cout << "*";  // Print stars for borders
               } else {
                   cout << " ";  // Print space inside
               }
           }
           cout << endl;  // Move to the next line after printing a row
       }
   
       return 0;
   }
   