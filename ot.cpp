#include<iostream>
using namespace std;

bool ispresent(int arr[][4],int target ,int row ,int col){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
          if(arr[j][i]==target){
            return 1;
          }
        }
        
    }
    return 0;
}

int main(){

    int arr[3][4];

    //input in 2D_Array in row wise
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //        cin>>arr[i][j];
    //     }
        
    // }

//input in 2D_Array in col wise
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           cin>>arr[j][i];
        }
        
    }
    //output
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
int target;
cout<<"enter your target "<< endl;
cin>>target;

if(ispresent(arr, target,3,4)){
    cout<<"element found";
}
else
{
    cout<<"element not found";
}

return 0;    
}