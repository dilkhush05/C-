#include<iostream>
using namespace std;


class A{
    public:
    void func(){
        cout<<"function A wala call hua ";
    }
};
class B{
    public:
    void func(){
        cout<<" functin B wala call hua ";
    }
};

class c :public A ,public B{
    public:
    
};

int main(){
    c obj;
    //obj.func();  ye glt hai kyuki 2no class ka func ka same name hai isse lye hm ambulity ka use krenge
    obj.A::func();
    cout<< endl;
    
    // isse prakar b wala call krna hai 
    obj.B::func();

    return 0;
}