#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--){
        int n; cin >> n;
        string s; cin>> s;

        int cnt = 0;

        while(cnt <n && s[cnt]== '1'){
            cnt++;
        }
        if(cnt == n){
            if(n == 4){
                cout <<"YES"<<'\n';
            }
            else{
                cout <<"NO" <<'\n';
            }
        }
        else{
            if((cnt-1)*(cnt-1)==n){
                cout <<"YES" <<'\n';
            }
            else{
                cout <<"NO" <<'\n';
            }
        }
//        int cnt = '1';
//
//        if(cnt % 4 == 0 && cnt == (cnt/4+1) * (cnt/4+1)){
//            cout <<"YES" <<'\n';
//        }
//        else{
//            cout <<"NO" <<'\n';
//        }
    }

    return 0;
}
