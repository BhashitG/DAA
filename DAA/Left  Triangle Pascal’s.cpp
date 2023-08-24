//
//  Left  Triangle Pascal’s.cpp
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

    for (int i = 0; i < rows; ++i) {
        int num = 1;
        for (int j = 0; j <= i; ++j) {
            cout << num << "   ";
            num = num * (i - j) / (j + 1);
        }
        cout << "\n";
    }

    return 0;
}
