//
//  Linear Search.cpp
//  DAA
//
//  Created by Bhashit Gautam on 24/08/23.
//

#include <iostream>

using namespace std;

int main(){
    
    int index, n;
    int search;
    
    cout << "Enter the size of array: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    cout << "Enter the element you wanna search: ";
    cin >> search;
    
    for(int i = 0; i < n; i++){
        if(arr[i] == search){
            cout << "The element is at: " << i + 1 << endl;
        }
        else{
            cout << "The element does not exist in the given array!!!";
            break;
        }
    }
    cout << endl;
}
