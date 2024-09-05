#include<iostream>
#include <limits.h>
using namespace std;


bool isPresent(int arr[][4],int target, int row, int col){

for(int row=0;row<3; row++){
for(int col = 0; col<4; col++){
    if( arr[row][col]== target){
        return 1;
    }
}
}
return 0;
}



void printSum(int arr[][4], int row, int col){
    cout<< "Printing the sum row wise: "<< endl;
for(int row=0;row<3; row++){
    int sum = 0;
for(int col = 0; col<4; col++){
    sum += arr[row][col];
}
cout<< "Sum is: "<< sum<< endl;
}
cout<< endl;
}


int largestRowSum(int arr[][4], int row, int col){
    
    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int row=0;row<3; row++){
    int sum = 0;
for(int col = 0; col<4; col++){
    sum += arr[row][col];
   
}

if(sum> maxi){
    maxi = sum;
    rowIndex = row;
}
}
cout<< "The maximum sum is: "<< maxi<< endl;
cout<<"Maximum Sum index is: "<<rowIndex<< endl;
}

int main(){
    int arr[3][4];


    cout<< "Enter the values of array"<< endl;
for(int row=0;row<3; row++){
for(int col = 0; col<4; col++){
    cin >> arr[row][col];
}
}


cout<< "Displaying the array!!"<< endl;
for(int row=0;row<3; row++){
for(int col = 0; col<4; col++){
    cout << arr[row][col]<< " ";
}
cout<< endl;
}



cout<< "Enter the element to search!!!"<< endl;
int target;
cin>> target;
int row;
int col;
if(isPresent(arr,target,row, col)){
    cout<< "Element found!!!!!"<< endl;
    
}
else{
    cout<< "Not found"<< endl;
}



printSum(arr, 3,4);
largestRowSum(arr,3,4);
    return 0;
}