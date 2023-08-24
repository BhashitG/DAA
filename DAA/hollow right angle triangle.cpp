//
//  hollow right angle triangle.cpp
//  DAA
//
//  Created by Bhashit Gautam on 23/08/23.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            if (j == 1 || j == i || i == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << std::endl;
    }

    return 0;
}
