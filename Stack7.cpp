#include<bits/stdc++.h>
using namespace std;

bool isoperator(char x){
    switch(x){
        case '+':
        case '-':
        case '*':
        case '/':
        return true;
    }
    return false;
}

string posttopre(string s){
    stack<string>st;
    for(int i=0; i<s.size(); i++){
        if(isoperator(s[i])){
            string op1=st.top();
            st.pop();
            string op2=st.top();
            st.pop();
            
            string temp=s[i]+op2+op1;
            st.push(temp);
        }
        else{
            st.push(string(1,s[i]));
        }
    }
    string ans="";
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    return ans;
}

int main(){
    string s="AB+CD-*";
    cout<<posttopre(s);
    
}
