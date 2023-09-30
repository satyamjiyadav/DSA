#include<bits/stdc++.h>
using namespace std;


bool par(string s){
    stack<char>ss;
    for(char ch:s){
        if(ch=='(' || ch=='{' || ch=='['){
            ss.push(ch);
        }
        else{
            if(ss.empty()){
                return false;
            }
            if(ch==')' && ss.top()=='('){
                ss.pop();
            }
            else if(ch=='}' && ss.top()=='{'){
                ss.pop();
            }
            else if(ch==']' && ss.top()=='['){
                ss.pop();
            }
            else{
                return false;
            }
        }
    }
    return ss.empty();
}
int main(){
    string s="([)])";
    cout<<par(s); 
}
