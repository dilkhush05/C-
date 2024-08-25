#include<iostream>
using namespace std;
class Human {

    public:
    int weight;
    int age;
    int hight;

    public:
    int getAge(){
        return this->age;
    }
    void setweight(int w){
         this->weight = w;
    }
    
};

// output me garbage value sb aaya hai ; smjh gye naaa

// inheratanse kiya hai male class human class ko;
class male : public Human{

    public:
    string colour;

    void sleep(){
        cout<<"mans sleeping :";
    }
};

int main (){

    male object1 ;
    cout<<object1.age <<endl;
    cout<<object1.hight <<endl;
    cout<<object1.weight <<endl;
    cout<<object1.colour <<endl;
    object1.setweight(100);
    cout<<object1.weight <<endl;
    object1.sleep();


    return 0;
}