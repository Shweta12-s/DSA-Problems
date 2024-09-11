#include<iostream>
using namespace std;
int main(){
int i = 5;

int *ptr = 0;
cout<< &ptr<< endl;
int *ptr1 = &i;
cout<< *ptr1<< endl;


int num = 5;
int a = num; 
a++;
cout<< num<< endl;

int *p = &num;
cout<< "before"<< num<< endl;
(*p)++;
cout<< "after"<< num<< endl;



int *p1 = p;
cout<< p << "- "<< *p<< endl;


int j= 1;
int *p2 = &j;
cout<< (*p2)++<< endl;
p2 = p2+1;
cout<< p2;
    return 0;
}