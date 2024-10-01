#include <bits/stdc++.h>
using namespace std;
int main(){

    int tc = 0;
    int n = 0;
    cin >> tc;

    for (int i=0; i< tc; i++) {
        cin >> n;
        int sum = 0;

        for(int j=0; j<n; j++){
            int a; cin >> a;

            sum += a * pow(-1, j);
        }
        cout << sum <<'\n';
    }

return 0;
}

