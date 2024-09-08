#include<iostream>
using namespace std;
int printArray(int array[], int n){
    for(int i = 0; i<n; i++){
        cout<< array[i]<< " ";
    }
    cout<< endl;
}
void swapAlternate(int array[], int size ){
    for(int i = 0; i< size; i+=2){
        if(i+1<size){
            swap(array[i], array[i+1]);
        }
    }
}
int main(){
    int even[8] = {3, 7, 4, 2, 16,5,9,2};
    int odd[5] = {4,6, 5, 7, 1};
    swapAlternate(even, 8);
    printArray(even, 8);


cout<< endl;
swapAlternate(odd, 5);
printArray(odd, 5);
return 0;
}