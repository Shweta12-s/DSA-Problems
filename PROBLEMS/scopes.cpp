#include<iostream>
using namespace std;
int update(int num[], int size){
     num[0] = 111;
    cout<< "COMING INSIDE THE FUNCTION" << endl;

for(int i = 0; i<4;i++){
    cout<<num[i]<<" ";
}



    cout<<"GOING BACK TO THE MAIN FUNCTION" <<  endl;
}
int main(){
int num[4]= {2,4,6,8};
update(num, 4);
for(int i = 0; i<4;i++){
    cout<<num[i]<<" ";
}

    return 0;
}