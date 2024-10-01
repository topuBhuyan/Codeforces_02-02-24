#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--) {

        int n; cin >> n;
        vector<int> ans;

        for(int i=0; i<n; i++) {

            string s; cin >> s;
            int k = 0;

            for(char c : s) {
                k++;
                if( c == '#'){
                    ans.push_back(k);
                    break;
                }
            }
        }
        reverse(ans.begin(), ans.end() );
        for(int val : ans)
            cout << val <<' ';
        cout << '\n';
    }


    return 0;
}
