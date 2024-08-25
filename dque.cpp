#include <iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>d;

    d.push_back(1);
    d.push_front(2);

    cout <<endl;

    cout<<"element of 2nd Index :"<<d.at(1)<<endl;
    cout<<"when we check 1st element of vector we use  :"<<d.front()<<endl;
    cout<<"when we check last element of vector we use  :"<<d.back()<<endl;
    cout<<"Empty or not :"<<d.empty();

    cout<<"before clean size -> "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after clean size -> "<<d.size()<<endl;
    for(int i:d){
     cout<<i<<" ";
    }
}
