#include<iostream>
using namespace std;

// it is a type of singel inheratence ;

class Animal {
     public:
     int age;
     int weight ;

     public:
     void bark(){
        cout << "barking "<<endl;
     }
};

class human{
    string colour;
    public:
    int speak(){
        cout << "speaking "<<endl;
     }

};

//multiple Inheritance 
class multiple :public human , public Animal{


};
int main(){
    
    multiple p;
    p.bark();
    p.speak();


return 0;
}