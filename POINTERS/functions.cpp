#include<iostream>
using namespace std;
void printFunction(int *p){
    cout<< *p<< endl;
}
void update(int *p){
    // p = p+1;
    *p = *p+1;
    // cout<<"updation: "<<p<<endl;
}
int getSum(int arr[], int n){
    cout<< "Size : "<< sizeof(arr)<< endl;
    int sum = 0;
    for(int i =0; i<n;i++){
        sum+= arr[i];
    }
    return sum;
}
int main(){
int value = 5;
int *p = &value;
cout<< p<<endl;
printFunction(p);
update(p);
cout<<*p<<endl;
int arr[5] = {1,2,3,4,5};
cout<< "The sum is: "<<getSum(arr,5)<< endl;

    return 0;
}