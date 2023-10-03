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

string pretopost(string s){
    stack<string>st;
    for(int i=s.size()-1; i>=0; i--){
        if(isoperator(s[i])){
            string op1=st.top();
            st.pop();
            string op2=st.top();
            st.pop();
            
            string temp=op1+op2+s[i];
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
    string s="*+AB-CD";
    cout<<pretopost(s);
    
}
