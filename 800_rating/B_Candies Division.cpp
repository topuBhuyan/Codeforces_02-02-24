#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    for(int i = 0; i<n; i++){

        int n, k; cin >> n >> k;

        int full = n - n % k;
        full += min(n % k, k / 2);
        cout << full <<'\n';
    }

    return 0;
}
