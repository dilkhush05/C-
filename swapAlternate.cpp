#include <iostream>
using namespace std;

void printarr( int arr[],int size){
    for( int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapAlt(int arr[], int size){
     
     for(int i=0; i<=size; i+=2) {
        if(i+1 < size){
            // swap(arr[i],arr[i+1]);
            //whitout using swap function
            int temp = arr[1];
            arr[1]=arr[0];
            arr[0] = temp;
        }
        
     }
}



int main() {
      
    
    int n ;
    cin>>n ;

     int even[n];
    
    for (int i = 0; i < n; i++) { 
        cout << "Enter a number: ";
        cin>> even[i] ;
    }
    swapAlt(even ,n);
    printarr(even , n);

}