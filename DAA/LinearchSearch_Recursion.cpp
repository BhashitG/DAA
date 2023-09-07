//
//  LinearchSearch_Recursion.cpp
//  DAA
//
//  Created by Bhashit Gautam on 07/09/23.
//

#include <iostream>

using namespace std;

int linearSearch(int arr[], int size, int key, int index = 0) {
    if (index >= size) return -1;
    if (arr[index] == key) return index;
    return linearSearch(arr, size, key, index + 1);
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    int result = linearSearch(arr, size, key);

    cout << "Linear Search Result: " << result + 1 << " element. " << endl;

    return 0;
}

