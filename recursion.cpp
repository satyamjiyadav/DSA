#include <bits/stdc++.h>
using namespace std;

int sumNumber(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else{
        return n + sumNumber(n - 1);
    }
}

int main(){
    int n = 12;
    int sum = sumNumber(n);
    cout << sum;
    return 0;
}
