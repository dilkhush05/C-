#include<iostream>
using namespace std;

void sayword( int n,string word []){

    //base case
    if (n==0)
    return ;

    int digit = n%10;
    n= n/10;

    sayword(n,word);
    cout<< word[digit]<<endl;

}

int main(){
    string word[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    int n;
    cin>>n;

    sayword(n,word);
}