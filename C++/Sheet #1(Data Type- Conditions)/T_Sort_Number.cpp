#include<bits/stdc++.h>
using namespace std;

int main()
{
/*
    vector <int> v(3), cp(3);

    for(auto &x : v)
        cin>>x;
    cp = v;

    sort(v.begin(), v.end());

    for(auto x : v)
        cout<< x <<endl;
    cout <<endl;
    for(auto x : cp)
        cout << x <<endl;
*/
    int x,y,z;
    cin >> x >> y >> z;
    /*
    x <= y <= z
    x <= z <= y
    y <= z <= x
    y <= x <= z
    z <= x <= y
    z <= y <= z
    */
         if(x <= y && y <= z) cout << x <<endl << y < <endl <<z <<endl;
    else if(x <= z && z <= y) cout << x <<endl << z <<endl <<y <<endl;
    else if(y <= z && z <= x) cout << y <<endl << z <<endl <<x <<endl;
    else if(y <= x && x <= z) cout << y <<endl << x <<endl <<z <<endl;
    else if(z <= x && x <= y) cout << z <<endl << x <<endl <<y <<endl;
    else if(z <= y && y <= x) cout << z <<endl << y <<endl <<x <<endl;
    cout << endl;
    cout << x <<endl << y <<endl <<z;



    return 0;
}
