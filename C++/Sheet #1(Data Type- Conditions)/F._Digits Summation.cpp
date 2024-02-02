#include<iostream>
using namespace std;

int main()
{
    long long N, M, summation;
    cin >> N >> M;

    summation = (N % 10) + (M % 10);
    cout << summation <<endl;

    return 0;
}
