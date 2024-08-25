#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;
       
        while(start <= end){
            if(arr[mid] == key){
                return mid ;
            }
            //go to right wala part
            // if(key > arr[mid]){
                if (arr[start] <= key && key <= arr[mid]){
                    start = mid + 1;
                }else if (arr[mid] <= key && key <= arr[end]){
                    start = mid+1;
                }else{
                end = mid - 1 ;
            }
                mid = start + (end - start)/2;
             }
            
            return -1;
  
        }
       

int main(){
    int even[6] = {3,8,11,14,16,77};
    int odd[7] = {4,5,6,7,0,1,2};

    int evenindex{binarysearch (even, 6,6)};
    cout << "Index of evenindex 12 is :" << evenindex << endl;

    int oddindex{binarysearch (odd, 7,0)};
    cout << "Index of oddindex 0 is :" << oddindex << endl;
}