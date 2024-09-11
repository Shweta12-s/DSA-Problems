#include<iostream>
using namespace std;
int main(){
int num = 5;
cout << num << endl;
cout<< "Address of num is: "<< &num<< endl;

int *p = &num;
cout<< "The value of pointer is: "<< *p<< endl;
cout<< "The value of pointer address is: "<< p<< endl;


char ch = 's';
char *p1 = &ch;
cout<< "The value of pointer is: "<< *p1<< endl;
cout<< "The value of pointer address is: "<< p1<< endl;

cout<< "Size of integer is"<< sizeof(num)<< endl;
cout<<"Size of pointer is"<<sizeof(p)<< endl;
cout<<"Size of pointer is"<<sizeof(p1)<< endl;
    return 0;
}