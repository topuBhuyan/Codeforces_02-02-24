#include<bits/stdc++.h>
using namespace std;

int beautifulYear(int n){
    int d1, d2, d3, d4;

    d4 = n%10;
    n = n / 10;
    d3 = n%10;
    n = n / 10;
    d2 = n%10;
    n = n / 10;
    d1 = n;

    if(d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4){
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    int year; cin >> year;
    year++;

    while(1){
        if(beautifulYear(year)){
            cout << year <<'\n';
            return 0;
        }
        year++;
    }

    return 0;
}
