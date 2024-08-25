#include<iostream>
using namespace std;

bool valid(char ch){
  if(((ch>= 'a' && ch<='z')||(ch>= 'A' && ch<='Z')||(ch>= '0' && ch<='9'))){
    return 1;
  }
  return 0;
}
bool valid(char ch){
  if(((ch>= 'A' && ch<='Z')||(ch>= '0' && ch<='9'))){
    return 1;
  }else {
    int temp ;
     temp = ch -'A'+'a';
      return temp;
  }
}
int main (){
    
}