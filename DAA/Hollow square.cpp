//
//  Hollow square.cpp
//  DAA
//
//  Created by Bhashit Gautam on 23/08/23.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n || i == j || j == n - i + 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
