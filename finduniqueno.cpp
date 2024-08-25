// ans = ans^arr[i];
#include <iostream>
using namespace std;

int uniqueno(  int arr[],int size){

    int ans = 0 ;
    for(int i =0; i<size; i++){
        ans=ans^arr[i];
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
        int unique[size];
        for(int i = 0; i<size; i++){
            cin>> unique[i];
        }
        uniqueno(unique, size);

    }
    
}