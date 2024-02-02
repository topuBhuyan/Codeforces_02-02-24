#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    char X;
    cin >> X;

    if(X >= 'a' && X <= 'z')
        cout <<(char)toupper(X);

    else if(X >= 'A' && X <='Z')
        cout<<(char)tolower(X);


  */
    if(X >= 65 && X <= 90)
        cout <<(char)(X + 32) <<endl;

    else
        cout << (char) (X - 32);

    return 0;
}
