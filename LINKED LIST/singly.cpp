#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;
Node(int data){
    this-> data = data;
    this-> next = NULL;
}
//reated a node with null address
~Node(){
    int value = this-> data;
    if(this-> next!= NULL){
        delete next;
        this-> next = NULL;
    }
    cout<< "The memory is free for node with data "<< value << endl;

}
};

void insertAtHead(Node* &tail,Node* &head, int d){
    if(head == NULL){
          Node* temp = new Node(d);
       head = temp;
       tail = temp;
    }
    else{
    Node* temp = new Node(d); //new node temp create hua
    temp-> next = head;  //temp ka next me head ka address rhega
    head = temp; //ab temp naya head bnegs
    }
}
void insertAtTail(Node* &tail,Node* &head, int d){
    if(tail == NULL){
          Node* temp = new Node(d);
       tail = temp;
       head = temp;
    }
    else{
     Node* temp = new Node(d); 
     tail-> next = temp;
     tail = tail-> next;
    }
}
void print(Node* &head){
    Node* temp = head;          //temp head banega
    while(temp != NULL){          // jb tk temp null na ho jaaye
        cout<< temp-> data<< "  ";    //tb tk temp ka data print ho rha h
        temp = temp-> next;           //temp aage bdhta jayega....temp next me move hota rhega
 
    }
   cout<< endl;
}
void insertAtPosition(Node* &tail,Node* &head, int position, int d){
    if(position == 1){
        insertAtHead(tail,head, d);
        return;
    }

    
    Node*temp = head;
    int count = 1;
    while(count< position -1){
        temp = temp-> next;
        count++;
    }
    if(temp-> next == NULL){
        insertAtTail(tail,head, d);
        return ;
    }
    Node* nodeToInsert = new Node(d);

    nodeToInsert-> next = temp-> next;
    temp-> next = nodeToInsert;
}

void deleteNode(int position, Node* &head){
    if(position == 1){
        Node* temp = head;
        head = head-> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr-> next;
            count++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main(){
    // Node* node1 = new Node(10); // ek new node node1 create hua
    // cout<< node1 -> data<<endl;
    // cout<< node1-> next<< endl;
Node* head = NULL;
Node* tail = NULL;
print(head);
insertAtTail(tail,head, 12);
print(head);
insertAtTail(tail,head, 20);
print(head);
insertAtPosition(tail, head, 3, 100);
print(head);
cout<< "Head "<< head-> data<< endl;
cout<< "Tail "<< tail-> data<< endl;
deleteNode(4, head);
print(head);
cout<< "Head "<< head-> data<< endl;
cout<< "Tail "<< tail-> data<< endl;
    return 0;
}