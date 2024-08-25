#include<iostream>
#include<vector>
using namespace std;

bool valid(char ch){
  if(((ch>= 'a' && ch<='z')||(ch>= 'A' && ch<='Z')||(ch>= '0' && ch<='9'))){
    return 1;
  }
  return 0;
}

bool valid(char ch){
  if(((ch>= 'a' && ch<='z')||(ch>= 'A' && ch<='Z')||(ch>= '0' && ch<='9'))){
    return 1;
  }
  return 0;
}



void reverse(int name[], int n){
  int s =0;
  int e = n;

  while(s<= e ){
    swap(name[s++], name[e--]);
  }
  
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
    
    cout<<"your name is : "<< name<<endl;
    int key = getlength(name);

    cout<<"length of charecter :"<< key<<endl;

    cout << "reverse of string :"<< name,key;

    

    return 0;

}