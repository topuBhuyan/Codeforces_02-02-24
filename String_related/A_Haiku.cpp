#include<bits/stdc++.h>
using namespace std;

bool Vowel(char u)
{
    return (u=='a' || u=='e' || u=='i' || u=='o' || u=='u');
}

int main()
{
   int arr[] = {5,7,5};

    vector <string> v;

    for(int i = 0; i<3; i++)
    {
        char c;
        cin >> c;

        string s;
        getline(cin, s);
        s = c + s;
        v.push_back(s);
    }
    for(auto i = 0; i<3; i++)
    {
        int Count=0;
        for(auto u : v[i])
        {
            if(Vowel(u) )
            {
                Count++;
            }
        }
        if(Count != arr[i])
        {
            cout <<"NO" <<endl;
            return 0;
        }
    }
     cout <<"YES" <<endl;

    return 0;
}
