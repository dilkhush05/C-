#include<iostream>
using namespace std;

bool checkParandrom(string& str, int i , int j){

    //base case
    if(i>j){
        return true;
    }
    if(str[i]!= str[j]){
        return false;
    }
        return checkParandrom( str,  i+1 ,  j-1);

    

}

int main(){
    string name = "roy";
    bool check = checkParandrom(name,0,name.length()-1);

    if (check){
        cout<<"It's parendrom _:"<<endl;
    }else{
        cout<<"It's not  parendrom _-"<<endl;
    }

    return 0;
}