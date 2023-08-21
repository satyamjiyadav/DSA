#include <bits/stdc++.h>
using namespace std;

int fibonac(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else
    {
        return fibonac(n-1)+fibonac(n-2);
    }
}

int main()
{
    int n = 8;
    int fib = fibonac(n);
    cout << fib;
    return 0;
}
