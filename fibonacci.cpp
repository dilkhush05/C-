#include<iostream>
using namespace std;
 int main () {
    int n ;
    cout<<"enter a input num :"<<endl ;
    cin >> n  ;
    int a=0;
    int b=1;
    cout<<a<<endl<<b<<endl;
    for(int i=0; i<=n; i++){
    
      int p=a+b;
      cout<<p<<endl;
      a=b;
      b=p;
    }
return 0;
}