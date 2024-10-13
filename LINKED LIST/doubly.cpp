#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* prev;
Node* next;

Node(int d){
    this-> data = d;
    this-> prev = NULL;
    this-> next = NULL;
}
~Node(){
    int value = this-> data;
    if(next!= NULL){
        delete next;
        next = NULL;
    }
    cout<< "memory free for node with the value "<< value<< endl;
}
};
//traversing a linked list
void print(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout << temp-> data<< " ";
        temp = temp-> next ;
          
    }
    cout << endl;
}
//finding the length of a linked list
int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp!= NULL){
        len++;
        temp = temp-> next ;
 
    }
    return len;
}
//inserting at head
void insertAtHead(Node* &tail, Node* &head, int d){
    if(head == NULL){
       Node* temp = new Node(d);
       head = temp;
       tail = temp;
    }
    else{
       Node* temp = new Node(d);
       temp-> next = head;
       head-> prev = temp;
       head = temp;
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
    temp-> prev = tail;
    tail = temp; 
    }
    
}
void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    //insert at start
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
  temp-> next -> prev = nodeToInsert;
  temp-> next = nodeToInsert;
  nodeToInsert-> prev = temp;

}
// void deleteNode(int position, Node* &head){
//     if(position == 1){
//         Node* temp = head;
//        temp-> next-> prev = NULL;
//        head = temp-> next;
//        temp-> next = NULL;
//        delete temp;
//     }
//     else{
//         Node* curr = head;
//         Node* prev = NULL;
//         int count = 1;
//         while(count < position){
//             prev = curr;
//             curr = curr-> next;
//             count++;
//         }
        
//        curr -> prev = NULL;
//        prev -> next = curr-> next;
//        curr-> next = NULL;

//         delete curr;
//     }
// }
void deleteNode(int position, Node* &head, Node* &tail) {
    if (position == 1) {
        Node* temp = head;

        // Update head
        head = temp->next;

        // If there is only one node in the list
        if (head == NULL) {
            tail = NULL;
        } else {
            head->prev = NULL;
        }

        temp->next = NULL;
        delete temp;
    } else {
        Node* curr = head;
        int count = 1;

        while (count < position && curr != NULL) {
            curr = curr->next;
            count++;
        }

        // If the node to be deleted is the last one, update tail
        if (curr->next == NULL) {
            tail = curr->prev;
            tail->next = NULL;
        } else {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
        }

        curr->next = NULL;
        curr->prev = NULL;
        delete curr;
    }
}
int main(){
// Node* node1 = new Node(10);
Node* head = NULL;
Node* tail = NULL;
print(head);

insertAtHead(tail,head, 20);
print(head);
insertAtHead(tail,head, 30);
print(head);
insertAtHead(tail,head, 40);
print(head);
insertAtHead(tail,head, 50);
print(head);
insertAtTail(tail,head, 220);
print(head);
insertAtPosition(tail, head, 2, 45);
print(head);
// cout<< "Head: "<< head-> data<< endl;
// cout<< "Tail: "<< tail-> data<< endl;
insertAtPosition(tail, head, 1, 60);
print(head);
// cout<< "Head: "<< head-> data<< endl;
// cout<< "Tail: "<< tail-> data<< endl;
insertAtPosition(tail, head, 5, 105);
print(head);
insertAtPosition(tail, head, 9, 1111);
print(head);
cout<< "Head: "<< head-> data<< endl;
cout<< "Tail: "<< tail-> data<< endl;
cout<<"length of linkedlist is: "<<getLength(head)<< endl;
deleteNode(1, head, tail);
print(head);
cout<< "Head: "<< head-> data<< endl;
cout<< "Tail: "<< tail-> data<< endl;

cout<<"length of linkedlist is: "<<getLength(head)<< endl;
deleteNode(8, head, tail);
print(head);
cout<< "Head: "<< head-> data<< endl;
cout<< "Tail: "<< tail-> data<< endl;
cout<<"length of linkedlist is: "<<getLength(head)<< endl;
    return 0;
}