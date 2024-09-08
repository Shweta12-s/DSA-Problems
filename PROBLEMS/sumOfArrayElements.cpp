#include<iostream>
using namespace std;

int sumOfElements(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    
    cout << "Enter the elements of the array: ";
    int sum = sumOfElements(arr, size);
    
    cout << "The sum of the elements is " << sum << endl;

    return 0;
}
