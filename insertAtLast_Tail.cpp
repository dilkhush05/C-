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

//insert last  
void insertAtLast(node* &tail, int d) {
    node* temp = new node(d);
    if (tail == NULL) {
        // If the list is empty, make this node the first node
        tail = temp;
    } else {
        // Otherwise, add the new node after the current last node
        tail->next = temp;
        tail = tail->next;
    }
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


    //tail pointed to node
    node* head = node1;
    node* tail = node1;
    print(head);

    insertAtLast(tail,12);
    print(head);

    insertAtLast(tail,18);
    print(head);

    insertAtLast(tail,20);
    print (head);

    return 0;
}