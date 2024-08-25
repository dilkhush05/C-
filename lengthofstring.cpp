#include<iostream>
#include<vector>
using namespace std;

int getlength(char name[]){

    int count=0;
    for(int i = 0; name[i] != '\0'; i++ ){
        count++;
    }
      return count;
    
    }
    
    int main (){
    char name[100];
    cout<<"enter your name : ";
    cin>>name;
    
    cout<<"your name is : "<< name<<endl;
    
    cout<<"length of charecter :"<< getlength(name)<<endl;

    return 0;

}