#include<bits/stdc++.h>
using namespace std;

int main()
{

    int tc;
    cin >> tc;

    while(tc--)
    {
        int n, k;
        cin >> n >> k ;

        if((k*(2*n-k+1)/2)&1)
        {
            cout <<"NO\n";
        }
        else
        {
            cout <<"YES\n";
        }

    }

    return 0;
}
