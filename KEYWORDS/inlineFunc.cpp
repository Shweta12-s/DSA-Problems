#include<iostream>
using namespace std;
// void func(int a, int b){
//     a++;
//     b++;
//     cout<< a<<endl<< b<< endl;
// }
int getMax(int a, int b){
    return (a>b)?a:b;
}
int main(){
// int a = 1;
// int b = 2;
// func(a,b);
int a = 1, b = 2;
int ans = 0;
ans = getMax(a,b);
cout<< ans<<endl;
// ans = (a>b)?a:b;
a = a+4;
b = b+1;
ans = getMax(a,b);
cout<<ans;

    return 0;
}