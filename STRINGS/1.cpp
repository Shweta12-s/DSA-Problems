#include <iostream>
using namespace std;
char isLowerCase(char ch){
    if(ch>='a'&& ch<='z'){
      return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}


bool checkPalindrome(char a[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        if(isLowerCase(a[s])!= isLowerCase(a[e])){
          return 0;
        }
        else{
            s++;
            e--;
        }

    }
    return 1;
}


void reverseString(char name[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}


int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i]!='\0'; i++){
        count = count+1;
    }
    return count;
}


int main(){
char name[20];
cout << "Enter your name: "<< endl;
cin>> name;
name[5] = '\0';
cout<< "Your name is: ";
cout<< name<< endl;
int len = getLength(name);
cout<< "Length of the string is: "<<len<< endl;
reverseString(name, len);
cout<< "Reversed name is: "<< name<< endl;
cout<< "Palindrome or not???"<< checkPalindrome(name, len)<< endl;

cout<< "Character is: "<< isLowerCase('A')<< endl;

return 0;
}