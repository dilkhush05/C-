#include<iostream>
#include<vector>
using namespace std;
bool parandromnum(char a[],int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        if(a[s] != a[e]){
         return 0;
        }else {
            s++;
            e--;
        }
    }
    return 1;
}

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
    
    cout<<"your name is : "<< name <<endl;
    int key = getlength(name);
    cout<<"length of charecter :"<< key <<endl;

    cout<<"parandromnum or not :"<< parandromnum(name,key);

    return 0;

}