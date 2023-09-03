#include <iostream>
using namespace std;

int getbit(int n, int pos){
    return (n & (1<<pos))!=0;
}
//example 0101=5, position ko ek se left shift karwa do: 2 ko 0010---> 0100 then
// 0101 & 0100==1..... agar ye (n & (1<<pos))  !=0 hai to true 1 ayega nhi to false mtlb 0;

int setbit(int n, int pos){
    return (n | (1<<pos));
}
// n=0101 ; pos=1; 0001; left shift-->0010;
//0101 & 0010 == 0111(7)

int main(){
    cout<<getbit(5,2)<<endl;
    cout<<setbit(5,1)<<endl;
}
