#include<iostream>
using namespace std;
// its is a singel linked list
class node{

    public:
    int data;
    node* next;

    node(int data){
        this ->data = data;
        this ->next = NULL;
    }

};

void insertAtNode(node* &head ,int d){

    //creat new node 
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}

void print(node* &head){

    node* temp = head;

    while (temp != NULL){
        cout <<temp -> data << " ";
        temp = temp -> next;

    }cout<< endl;
   
    
}

int main(){
    //created a new node
    node* node1 = new node(10);
    // cout<< node1 ->data <<endl;
    // cout<< node1  ->next <<endl;


    //head pointed to node
    node* head = node1;
    print(head);

    insertAtNode(head,12);
    print(head);

    insertAtNode(head,18);
    print(head);

    insertAtNode(head,20);
    print(head);

    return 0;
}