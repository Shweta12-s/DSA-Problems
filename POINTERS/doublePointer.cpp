#include<iostream>
using namespace std;
void update(int **p2){
    //p2 = p2+1;
    // *p2 = *p2 + 1;
    **p2 = **p2 +1;
}
int main(){
int a = 5;
int *p= &a;
int **p2 = &p;


cout<< "All well!!"<< endl;

// 
// cout<< p2<<endl;
// cout<< *p2<<endl;
// cout<<a<<endl;

cout<<"before"<<endl;
cout<<a<<endl;
cout<<*p<<endl;
cout<<**p2<<endl;

cout<<endl<<endl;

cout<<"after"<<endl;
update(p2);
cout<<a<<endl;
cout<<p<<endl;
cout<<*p2<<endl;


    return 0;
}