#include<iostream>
using namespace std;
bool search(int array[], int size, int key){
for(int i = 0; i<size; i++){
    if(array[i]==key){
return 1;
    }
}
return 0;
}


int main(){
int arr[10] = {2,4,44,54,-4,23,10};
int key;
cout<< "Enter the element to search "<<endl;
cin>>key;

bool found= search(arr, 10, key);
if(found){
    cout<< "Element is found"<<endl;
}
else{
    cout<<"Element is not found"<< endl;
}
    return 0;
}