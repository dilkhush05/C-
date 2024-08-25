#include<iostream>
using namespace std;

void printrec(int arr[], int n){
    cout << "size of array is "<< n << endl;

    for(int i = 0; i< n ; i++){
        cout << arr[i]<< endl;
    }cout << endl;

}


int GetSum(int arr[],int size){
    printrec(arr , size);
    // base case 
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];

    }
    int morepart = GetSum(arr + 1,size - 1);
    int sum = arr[0] + morepart;
    return sum;
}


int main(){
    int arr[5]={2,3,3,12,6};
    int size = 5;

    int  ans = GetSum(arr,size);

    cout << "sum is : "<< ans << endl ; 



    
    
    return 0 ;

}