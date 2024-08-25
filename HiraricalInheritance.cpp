#include<iostream>
using namespace std;


class A{
    public:
    void func1(){
        cout<<"inharit functin 1";
    }
};
class B: public A{
    public:
    void func2(){
        cout<<"inharit functin 2";
    }
};

class C :public A{
    public:
    void func3(){
        cout<<"inharit functin 3";
    }
};
int main(){

    A obj1;
    obj1 .func1();
    cout<<endl;


    B obj2;
    obj2.func1();
    cout<<endl;
    obj2.func2();
    cout<<endl;


    C obj3;
    obj3.func1();
    cout<<endl;
    obj3.func3();

    return 0;
}