#include<iostream>
#include <cstring>
// #include "Hero.cpp"
using namespace std;
class Hero{
    public:
    // char name[];
    private:
    int health;
    public:
    char *name;
    


    Hero(){
        cout<< "Constructor called!!"<< endl;
        name  = new char[100];
    }
    char level;
    int getHealth(){
        return health;
    }
  
    Hero(int health, char level){
        cout<< "this-> "<< this<< endl; 
        this -> health = health;
        this -> level = level;
    }
    // Hero(Hero& hiralal){
    //     cout<< "Copy Constructor called!!!"<< endl;
    //     this-> health = hiralal.health;
    //     this-> level = hiralal.level;
    // }
    void print(){
        cout<< endl;
        cout<< "Name: "<< this->name<<","<<endl;
        cout<< "Health: "<< this->health<<","<< endl;
        cout<< "Level: "<< this->level<<","<<endl;
        cout<< endl;
    }
    void setHealth(int h){
        health = h;
    }
    char getLevel(){
        return level;
    }
    void setLevel(char ch){
        level = ch;
    }
    void setName(char name[]){
        strcpy(this-> name, name);
    }
};
int main(){
Hero heeralal;
char name[6] = "Rajan";
heeralal.setHealth(30);
heeralal.setLevel('B');
heeralal.setName(name);
heeralal.print();
// Hero Raju(20, 'A');
// Raju.print();
// Hero R(Raju);
// R.print();

Hero Motilal(heeralal);
Motilal.print();
heeralal.print();
Motilal.name[0] = 'S';
Motilal.print();
heeralal.print();


// Hero Raju;
// Hero.setHealth(30);
// Hero.setLevel('B');











// Hero Ramesh(50, 'A');
// cout<< "Address of ramesh is: "<< &Ramesh<< endl;
// Ramesh.getHealth();
// Hero *h = new Hero;

// Hero temporary(40, 'C');
// temporary.print();




// Hero h;
// Hero *b = new Hero;
// (*b).setHealth(30);
// (*b).setLevel('C');

// cout<< "Health: "<< (*b).getHealth()<< endl;
// cout<< "level: "<< (*b).getLevel() << endl;








//creation of object
// Hero h1;
// h1.setHealth(20);
// // getHealth();
// // h1.name = 'Harry';

// h1.level = 'A';
// cout<< "Size is: "<< sizeof(h1)<< endl;
// cout<< "health: "<< h1.getHealth()<< endl;
// cout<< "level: "<< h1.level<< endl;

    return 0;
}