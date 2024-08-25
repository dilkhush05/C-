#include<iostream>
using namespace std;

void printrec(int arr[], int s , int e){
    

    for(int i = s; i< e ; i++){
        cout << arr[i]<< endl;
    }cout << endl;

}

int binerySearch(int arr[], int s,int e , int Key){
    printrec(arr,  s ,  e);

    // base case 
    if (s>e){
        return false;
    }
    int mid = s + (e - s )/2;

    if (arr[mid] == Key){
       return true;
    }
    if(mid < Key){
      return  binerySearch( arr, mid + 1, e ,  Key) ;
    }else {
       return binerySearch( arr, s, mid - 1 ,  Key);
    }
    

}

int main(){
    int arr[5]={2,3,4,6,9};
    int end = 5;
    int Key = 9;
    int start =0 ;

    bool  ans = binerySearch(arr , start,end - 1, Key);

    cout << "Element is :"<< ans << endl;

   
    
    return 0 ;

}