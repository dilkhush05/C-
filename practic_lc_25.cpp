#include<iostream>
using namespace std;

int main(){
    
    int arr[10] = {2,5,6};
    // cout<<"  adderess of first mamory biock is : "<< arr <<endl;
    // cout<<"  adderess of first mamory biock is : "<< &arr[0] <<endl;
    
    // cout<<"  4th : "<< *arr <<endl;
    // cout<<"  5th : "<< *arr+1 <<endl;cout<<"  5th : "<< (*arr)+1 <<endl;// both are same
    // cout<<"  6th : "<< *(arr+1) <<endl;

    // int temp[10];

    // cout << sizeof(temp)<< endl;
    // cout << sizeof(*temp)<< endl;

    // int *ptr = &temp[0];
    // cout << sizeof(ptr)<< endl;
    // cout << sizeof(*ptr)<< endl;
    // cout << sizeof(&ptr)<< endl;

    // int s[20] = {1,3,2,5,6};

    // cout << "_-> : "<< &s[0]<<endl;
    // int *p = &s[20];
    // cout << "_-> : "<< &p<<endl;

    char temp = 'g';
    char *ptr = &temp;

    cout << ptr <<endl;




    return 0;
}