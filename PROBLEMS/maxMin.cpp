#include <iostream>
#include <climits>
using namespace std;

int getMin(int arr[], int n){
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        // if(arr[i]<min){
        //     min = arr[i];
        // }
        mini = min(mini, arr[i]);
    }
    return mini;

}

int getMax(int arr[], int n){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        // if(arr[i]>max){
        //     max = arr[i];
        // }
        maxi = max(maxi, arr[i]);
    }
    return maxi;

}
int main(){

int size;
cin >> size;
int arr[100];

for(int i =0; i<size; i++){
    cin >> arr[i];
}

cout<< "Maximum value of the array is "<<getMax(arr, size)<<endl;
cout<< "Minimum value of the array is "<<getMin(arr, size)<<endl;
    
    return 0;
}
