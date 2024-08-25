#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v ; //creat vector
    cout<<"capacity->"<<v.capacity()<<endl; //total kitne element ke lye memory alocate hue ha
    
    vector<int> a(5,1); // jb vector ka size pta ho tb hm aese use krte hai;
    for(int i:v){
        cout<< i <<" ";
    }cout<<endl;

    v.push_back(1);  //element dalne ka function
    cout<<"capacity->"<<v.capacity()<<endl;

    v.push_back(2);  //element dalne ka function
    cout<<"capacity->"<<v.capacity()<<endl;

    v.push_back(3);  //element dalne ka function
    cout<<"capacity->"<<v.capacity()<<endl;
    cout<<"size -> "<<v.size()<<endl;  //total kitne element hai iss vector me 

    cout<<"element of 2nd Index :"<<v.at(2)<<endl;
    cout<<"when we check 1st element of vector we use  :"<<v.front()<<endl;
    cout<<"when we check last element of vector we use  :"<<v.back()<<endl;
    
    cout<<"before pop back :"<<endl;
    for(int i:v){
        cout<< i ;
}cout << endl;

v.pop_back();  //tb use hrte hai jb vector ka last element ko vector se niklna hota hai

cout<<"after pop back :"<<endl;
    for(int i:v){
        cout<< i ;
        
    }cout << endl;
   cout<<"before clear size :";  
   cout<<"size -> "<<v.size()<<endl;

   v.clear();  //jb hme vector ko khali krna ho tb hm yee usw=a krte hai

   cout<<"before clear size :";
   cout<<"size -> "<<v.size()<<endl;
}