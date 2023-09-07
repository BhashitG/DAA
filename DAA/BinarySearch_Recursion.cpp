//
//  BinarySearch_Recursion.cpp
//  DAA
//
//  Created by Bhashit Gautam on 07/09/23.
//

#include <iostream>

using namespace std;

int binarySearch(int arr[], int left, int right, int key) {
    if (left > right) return -1;
    int mid = left + (right - left) / 2;
    if (arr[mid] == key) return mid;
    if (arr[mid] > key) return binarySearch(arr, left, mid - 1, key);
    return binarySearch(arr, mid + 1, right, key);
}

int main() {
    int size;
    cout << "Enter the size of the sorted array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the sorted elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    int result = binarySearch(arr, 0, size - 1, key);

    cout << "Binary Search Result: " << result << endl;

    return 0;
}
