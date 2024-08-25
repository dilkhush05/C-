#include<iostream>
using namespace std;

void ReverseTheStr(string& str , int i,int j){


    //Base case
    if(i >= j)
     return ;

    swap(str[i],str[j]);
    i++;
    j--;

    //recurcive function;
    ReverseTheStr(str,i,j);
}

int main(){

    string name = "abcdef";

    ReverseTheStr(name , 0 , name.length()-1);
    cout <<name<<endl;

    return 0;
}


//_______correct ptogram is hare________

