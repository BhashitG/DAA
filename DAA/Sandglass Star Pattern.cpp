//
//  Sandglass Star Pattern.cpp
//  DAA
//
//  Created by Bhashit Gautam on 23/08/23.
//

#include <iostream>

using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j < i; ++j) {
            cout << " ";
        }
        for (int j = i; j <= rows; ++j) {
            cout << "* ";
        }
        cout << "\n";
    }

    for (int i = rows - 1; i >= 1; --i) {
        for (int j = 1; j < i; ++j) {
            cout << " ";
        }
        for (int j = i; j <= rows; ++j) {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}
