#include<iostream>

using namespace std;

int main()
{
    int n;
    int flag = 0;
    
    cout<<"Enter the size of array: ";
    cin>>n;
    
    int a[n];
    
    cout<<"Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                flag++;
            }
        }
        
        if (flag == 0) {
            break;
        }
    }
    
    cout << "Array after sort: ";
    
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    
    cout << "Number of passes: " << flag;
    cout << endl;
    
    return 0;
}
