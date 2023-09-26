
#include <bits/stdc++.h>
using namespace std;

void ispalindrome(string str2){
    int s,e;
    s=str2[0];
    e=str2.length()-1;
    while(s<=e){
        if(str2[s]!=str2[e]){
            cout<<false;
        }
        else{
            s++;
            e--;
        }
    }
    cout<<true;

}

int main() {
    string s;
    getline(cin,s);
    // string :: iterator it;
    // string :: reverse_iterator it2;

    for(auto it2 =s.begin(); it2!=s.end(); it2++){
        cout<<*it2;
    }
    // string str2="";
    // for(char ch : s){
    //     if(isalpha(ch)){
    //         str2+=ch;
    //     }

    // }
    // cout<<str2;
    // ispalindrome(str2);

    return 0;
}
