#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  x;
    cin >> x;
    int y = y-x/1000;

    if(y % 2 == 0)
    cout <<"EVEN";
    else
        cout <<"ODD";

    return 0;
}
