#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, print,print2;
    cin >> a >> b>> c>> d;

    if(b * log(a) > c * log(d))
        cout <<"Yes"<<endl;
    else
        cout <<"No"<<endl;

    return 0;
}
