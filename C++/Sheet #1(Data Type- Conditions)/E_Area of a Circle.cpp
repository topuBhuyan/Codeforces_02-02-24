#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double Area, r;
    double pi = 3.141592653;

    cin >> r;

    Area = pi *r *r;

    cout << fixed << setprecision(9) << Area  << endl;

}
