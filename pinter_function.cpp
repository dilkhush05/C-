#include<iostream>
using namespace std;
void print(int *ptr){
    cout<<*ptr<< endl;
}

int main(){
    int val = 5;
    int *p = &val;

    print(p);

    return 0;
}