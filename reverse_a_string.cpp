//using stack { its time com is same and space com is not batter then swap mathod   }

#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main (){
    string str = "dilkhush";
    stack<char> s;

    for(int i = 0; i < str.length(); i++){
        char ch = str[i];
        s.push(ch);
    }
    string ans;
    while(!s.empty()){
        char ch =  s.top();
        
        ans.push_back(ch);
        s.pop();
    }
    cout<< " answer :" << ans << endl;
    return 0 ;
}