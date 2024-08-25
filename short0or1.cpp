#include<iostream>
using namespace std;

void printroy(int arr[],int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
       
    }
    cout << endl ;
}

void shortone(int arr[], int size){

   int left = 0 , right = size - 1;

   while(left < right){
    
      while(arr[left]== 0 && left < right){
       left++;
      }
      while(arr[right]== 1 && left < right){
       right++;
      }
      //agar yha pohoch gye ho ,iska matlab
    //arr[i]==1 and arr[j]==0
      if(left < right){
        swap(arr[left],arr[right]);
        left++;
        right++;
      }

   }
}

int main () {

    // int size ;
    // cin >> size ;
    // int roy[size];
    // for(int i=0; i<size; i++){
    //     cout << "enter only 0 & 1 :";
    //    cin >> roy[i];
    // }
    int roy[8] = {0,1,0,0,1,1,0,1};
  shortone(roy, 8);
  printroy(roy,8);
    
}