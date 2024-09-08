// #include<iostream>
// using namespace std;
// int firstOcc(int arr[], int size, int key){
   
//     int start = 0;
//     int end = size-1;
//     int mid = start + (end-start)/2;
//      int ans = -1;

//     while(start<=end){
//         int mid = start + (end-start)/2;
//         if(arr[mid]==key){
//             ans = mid;
// end = mid-1;

//         }
//         else if(arr[mid]> key){
//             end = mid-1;
//         }
//         else if(arr[mid]<key){
//             start = mid+1;
//         }
//         //   mid = start + (end-start)/2;
//     }
//     return ans;

// }

// int main(){
// int even[6]= {2,4,6,6,8,9};
// int firstIndex = firstOcc(even, 6, 6);
// cout<< "The first index of 6 is "<< firstIndex << endl;

//     return 0;
// }
#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;  // Calculate mid inside the loop

        if (arr[mid] == key) {
            ans = mid;      // Update answer
            end = mid - 1;  // Move to the left half
        } else if (arr[mid] > key) {
            end = mid - 1;  // Move to the left half
        } else {
            start = mid + 1;  // Move to the right half
        }
    }
    return ans;
}
int lastOcc(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;  // Calculate mid inside the loop

        if (arr[mid] == key) {
            ans = mid;      // Update answer
            start = mid + 1;  // Move to the left half
        } else if (arr[mid] > key) {
            end = mid - 1;  // Move to the left half
        } else {
            start = mid + 1;  // Move to the right half
        }
    }
    return ans;
}

int main() {
    int even[9] = {2, 4, 6, 6,6,6,6, 8, 9};
    int firstIndex = firstOcc(even, 9, 6);
      int lastIndex = lastOcc(even, 9, 6);
    cout << "The first index of 6 is " << firstIndex << endl;
cout << "The last index of 6 is " << lastIndex << endl;

    return 0;
}
