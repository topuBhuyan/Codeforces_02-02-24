#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, r;
    char p,q;
    cin>>a >>p >>b >>q >> r;

    if(p == '+'){
        if(a + b == r)
            cout <<"Yes" <<endl;
        else
            cout <<a + b <<endl;
    }
    else if(p == '-'){
        if(a - b == r)
            cout <<"Yes" <<endl;
        else
            cout <<a - b <<endl;
    }
    else
        if(a * b == r)
        cout <<"Yes" <<endl;
    else
        cout <<a * b <<endl;



    return 0;
}
