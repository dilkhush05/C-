#include<iostream>
using namespace std;

void Marge(int *arr , int s ,int e){

    int mid = s+(e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int [len1 ];
    int *second = new int [len2 ];

    // copy krna sru kro;
    int k = s;
    for(int i = 0; i<len1 ; i++){
        first[i] = arr[k++]; 
    }
    k = mid + 1;
    for(int i = 0; i<len2 ; i++){
        second[i] = arr[k++]; 
    }

    // Marge 2 shortade array ;

    int index1 = 0;
    int index2 = 0;

    k = s;

    while(index1 <len1 && index2 <len2){
        if(first[index1] < second [index2]){
            arr[k++] = first[index1++];
        }else{
            arr[k++] = second[index2++];
        }
    }

    while(index1 <len1){
        arr[k++] = first[index1++];
    }

     while(index2 < len2){
        arr[k++] = second[index2++];
    }

     delete [ ]first;
     delete[]second;
}

void MarzeShort(int *arr , int s,int e){

   
    //base case
    if(s>=e){
        return ;

    }
    int mid = s+(e-s)/2;

     // left part short krna hai 
     MarzeShort(arr ,s ,mid);

    // right wala part short krna hai 
     MarzeShort(arr ,mid +1 ,e);

     //marze
     Marge(arr , s ,e);


}

int main(){
    int arr[5]= {1,4,3,6,2};
    int n = 5;

     MarzeShort(arr , 0 ,n - 1);
     for(int i = 0 ;i< n-1 ;i++){
        cout << arr[i]<<endl;
     }cout << endl;
}