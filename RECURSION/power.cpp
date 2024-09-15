#include<iostream>
using namespace std;
int power(int m, int n){
    if(n == 1)
    return 2;
    else{
        return 2* power(2, n-1);
    }
}
int main(){
int n;
cin >> n;
int ans = power(2,n);
cout<< ans<<endl;
    return 0;
}