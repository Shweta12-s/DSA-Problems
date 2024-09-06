#include<iostream>
using namespace std;
int main(){
int arr[20] = {2,4,6,5,4,33,222,1};
char ch[6] = "abcde";

cout<< arr<< endl;
cout<< ch<< endl;
char *c = &ch[0];
cout<<    c    <<endl;
cout<<    &c    <<endl;
cout<<    *c    <<endl;


char temp = 'z';
char *p = &temp;
cout<< p<< endl;
    return 0;
}