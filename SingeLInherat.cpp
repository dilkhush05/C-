#include<iostream>
using namespace std;

// it is a type of singel inheratence ;

class Animal {
     public:
     int age;
     int weight ;

     public:
     int speak(){
        cout << "speaking "<<endl;
     }
};

class dog : public Animal{

};
int main(){
    dog d;
    d.speak();
return 0;
}