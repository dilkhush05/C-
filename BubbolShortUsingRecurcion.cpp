#include<iostream>
using namespace std;

void bubblshort(int *arr ,int size){
    //basecase
    if(size == 0 || size == 1){
        return ;
    }
 // 1 case solve krr lya : largest number k left me dal dya :
for (int i = 0; i < size -1; i++)
{
    if(arr[i]>arr[i+1])
    swap(arr[i],arr[i+1]);
}


    //recurciv call
   return bubblshort(arr ,size-1);
    
}

int main (){
    int arr[5] = {1,3,8,4,5};
    int size = 5;

     bubblshort(arr ,size);

     for (int i = 0; i < size ; i++)
{
  cout<<arr[i];
    
}
}