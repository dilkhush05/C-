#include<iostream>
using namespace std;
int chak(int m){
    for(int i=1;i<=m; i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
}
int  main(){
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
     chak(n);

}