#include<iostream>
using namespace std;


bool isShorted(int arr[],int size){

 if (size == 0 || size == 1){
    return 1;
 }
 if (arr[0] > arr[1]){
    return 0;

 }else{
    bool reaminingpare = isShorted(arr + 1 , size - 1);
    return reaminingpare;
 }
}

int main(){
    int arr[5]={2,3,4,9,6};
    int size = 5;

    bool ans = isShorted(arr,size);
    
    if(ans){
        cout << "shorted : "<<endl;

    }else{
        cout << "not - shorted : "<<endl;
    }

}