#include<iostream>
using namespace std;
int factorial(int n){
    if(n == 0)
    return 1;

    // int smallerProb = factorial(n-1);
    // int biggerProb = n* smallerProb;
    // return biggerProb;
    return n* factorial(n-1);
}
int main(){

    int n;
    cin>>n;
    // cout<<"enter n: "<<endl;
// cout<<"Enter the value of n. "<<endl;
int ans = factorial(n);
cout<<ans<<endl;

    return 0;
}