#include<iostream>
using namespace std;
int score = 100;
void a(int& i){
cout<< i<< endl;
cout<< "score in a "<< score<< endl;
}
void b(){

cout<< "score in b "<< score<< endl;
}
int main(){
int i = 5;
{
    int i = 4;
    cout<< i<< endl;
}
cout<< "score in main "<< score<< endl;
a(i);
b();
    return 0;
}