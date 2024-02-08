#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a, b;
    cin >> a >>b;

    int t = 100 - a;
    double x = (100*b)/t;
    cout <<fixed << setprecision(2) << x <<endl;


    return 0;
}
