#include<iostream>
#include<queue>
using namespace std;

int main(){
    // creat a queue
    queue<int> que;

    que.push(12);

    cout<< "font of que is : "<< que.front()<<endl;
    que.push(10);
    cout<< "font of que is : "<< que.front()<<endl;
    que.push(19);
    cout<< "font of que is : "<< que.front()<<endl;
    que.push(15);

    cout<< "size of queue : "<< que.size() << endl;

    que.pop();
    cout<< "size of queue : "<< que.size() << endl;

    if(!que.empty()){
        cout<<"que is not empty"<< endl;
    }else {
        cout<<"que is  empty"<< endl;
    }

}