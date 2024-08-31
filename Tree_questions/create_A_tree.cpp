#include<iostream>
using namespace std;

class node {
     public:
         int data;
         node*left;
         node*right;

         node(int d){
            this ->data = d;
            this -> left = NULL;
            this -> right = NULL;
         }
};

node* buildtree(node* root){

    cout << "Enter a data :" << endl;
    int data;
    cin >> data;
    root  = new node(data);
    if(data == -1){
        return NULL;
    }

    cout << "Enter data for inserting left" << endl;
    root ->left = buildtree(root-> left); 

    cout << "Enter data for inserting right" << endl;
    root ->right = buildtree(root-> right);    

    return root;
}

int main(){
    node * root = NULL;
    //creating a tree     
    root = buildtree(root);
    return 0;
}