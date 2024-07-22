#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for(int i =0; i<n;i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;
}
int main(){
int arr[4] = {3,6,9,12};
int brr[3] = {2,4,6};

reverse(arr, 4);
reverse(brr, 3);

printArray(arr, 4);
printArray(brr, 3);


    return 0;
}