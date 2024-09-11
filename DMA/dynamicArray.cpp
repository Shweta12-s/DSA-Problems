#include<iostream>
using namespace std;
int getSum(int *arr, int n){

    int ans = 0;
    for(int i = 0; i<n; i++){
        ans+=arr[i];
    }
    return ans;
}
int main(){
// char ch = 'a';
// cout<< sizeof(ch)<<endl;

// char *chr = &ch;
// cout<<sizeof(&chr)<<endl;
int n;
cin>>n;
int* arr = new int[5];
for(int i= 0; i<n; i++){
    cin>> arr[i];
}
int ans = getSum(arr,n);
cout<< "final answer is :  "<< ans<< endl;
    return 0;
}