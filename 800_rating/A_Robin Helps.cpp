

#include<bits/stdc++.h>
using namespace std;

void fun() {
    int num1, num2; cin >> num1 >> num2;

    int res = 0, gold = 0;

    for(int i=0; i< num1; i++) {
        int cur; cin >> cur;

        if(!cur && gold)
            gold--, res++;
        else if
            (cur >= num2)
            gold += cur;
    }
    cout << res <<'\n';
}

int main()
{
    int tc; cin >> tc;

    while(tc--) fun();

    return 0;
}

