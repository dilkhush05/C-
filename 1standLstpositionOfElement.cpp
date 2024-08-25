#include<iostream>
using namespace std;
 int stOccrence(int arr[],int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = 0;

    int mid = start + (end - start)/2;
       
        while(start <= end){
            if(arr[mid] == key){
                return mid ;
            }
            //go to right wala part
            if(key > arr[mid]){
                start = mid + 1;
            }
            else{
                end = mid - 1 ;
            }
             mid = start + (end - start)/2;
        }
        return ans;

 }

 int lastOccrence(int arr[],int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = 0;

    int mid = start + (end - start)/2;
       
        while(start <= end){
            if(arr[mid] == key){
                mid = ans ;
            }
            //go to right wala part
            if(key > arr[mid]){
                start = mid + 1;
            }
            else{
                end = mid - 1 ;
            }
             mid = start + (end - start)/2;
        }
        return ans;

 }


int main( ){
    int even[6] = {1,2,3,3,4,5};

//    int evenindex{stOccrence(even,6,3)};
//     cout <<"stOccrence of the no. 3 is : " << evenindex;

    int oddindex{lastOccrence(even,6,3)};
    cout <<"stOccrence of the no. 3 is : " << oddindex;
}