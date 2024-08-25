#include<iostream>
using namespace std;


bool SurchKey(int arr[] , int size , int Key){
  
  if (size == 0){
    return false;
  }
  if( arr[0] == Key){
    return true;
  }
  else {
   int  moreElement  = SurchKey( arr - 1 , size - 1 ,Key);
   return moreElement;
  }
}





int main(){
    int arr[5]={2,3,4,9,6};
    int size = 5;
    int Key = 9;

    bool  ans = SurchKey(arr , size , Key);

    if (ans)
    {
       cout << "present : "<< endl ;  
    }else {
        cout << "absent  : "<< endl ;
    }
    

    



    
    
    return 0 ;

}