// ans = ans^arr[i];
#include <iostream>
using namespace std;

int duplicate(  int arr[],int size){

    int ans = 0 ;
    for(int i =0; i<size; i++){
        ans=ans^arr[i];
    }
    for(int i =0; i<size; i++){
        ans=ans^i;
    }
    // return ans;
    cout<< "answer is :"<<ans;
}



int main() {
    int t;
    cout <<"enter a test case :";
    cin >>t;

    while(t--){
        int size;
        cout <<"enter a array size :";
        cin >> size ;
        int duplicateno[size];
        for(int i = 0; i<size; i++){
            cin>> duplicateno[i] ;
        }
        duplicate(duplicateno, size);

    }

}