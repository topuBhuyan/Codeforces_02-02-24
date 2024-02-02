#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z')
    {
        cout<<"ALPHA\nIS CAPITAL"<<endl;
    }
    else if  (ch >= 'a' && ch <= 'z')
    {
        cout<<"ALPHA\nIS SMALL"<<endl;
    }
    else
    {
        cout <<"IS DIGIT";
    }

    return 0;
}
