#include<iostream>
using namespace std;
void printArray(int array[], int size){
cout<< "Printing the array is! "<<endl;
for(int i=0;i<size;i++){
    cout<< array[i]<< " ";
}
cout<<endl << "PRINTING DONE"<< endl;
}
int main(){
// int number[10];
int second[3] = {3,6,9};
printArray(second, 3);

// cout<< "Value at Second Index is "<< second[2]<< endl;
// cout<< "Value at index[6] is "<< number[6]<< endl;
// cout<< "Value at index[20] is "<< number[20]<< endl;
cout<< "Everything is fine!" <<endl;

//printing the array
int num[15] = {2,4,6,8,10};
// int n=15;
// printArray(num, 15);
int numSize = sizeof(num)/sizeof(int);
cout<< "Size of num is: "<< numSize <<endl;
// cout<< "Printing the array is! "<<endl;
// for(int i=0;i<n1;i++){
//     cout<< zeroArray[i]<< " ";
// }

int zeroArray[15] = {0};
int n1=15;
printArray(zeroArray, 15);
// cout<< "Printing the array is! "<<endl;
// for(int i=0;i<n1;i++){
//     cout<< zeroArray[i]<< " ";
// }

cout<<endl << "PRINTING DONE"<< endl;
char ch[5]={'a','b','c','d','e'};
cout<< ch[3]<<endl;

cout<< "Printing the array is! "<<endl;
for(int i=0;i<5;i++){
    cout<< ch[i]<< " "<<endl;
}
cout<<endl << "PRINTING DONE"<< endl;


    return 0;
}