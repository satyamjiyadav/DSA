#include<bits/stdc++.h>
using namespace std;

int postevl(string s){
    stack<int>st;
    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i])){
            st.push(s[i]-'0');
        }
        else{
            int val1=st.top();
            st.pop();
            int val2=st.top();
            st.pop();
            
            switch (s[i]){
                case '+':
                st.push(val1+val2);
                break;
                case '-':
                st.push(val1-val2);
                break;
                case '*':
                st.push(val1*val2);
                break;
                case '/':
                st.push(val1/val2);
                break;
            }
        }
    }
    return st.top();
    
}

int main(){
    string s="231*+9-";
    cout<<postevl(s);
}



