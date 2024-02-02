#include<bits/stdc++.h>
using namespace std;

int main()
{

    int years, days, month, n;
    cin >>n;

    years = n / 365;
    n %= 365;
    month = n / 30;
    n %= 30;
    days = n;

    cout <<years <<" years"<<endl;
    cout <<month <<" months"<<endl;
    cout <<days <<" days"<<endl;

    return 0;
}




