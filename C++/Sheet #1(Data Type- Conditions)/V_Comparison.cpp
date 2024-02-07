#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num1,num2;
    char c;
    cin >>num1 >>c >>num2;

    switch(c){
    case '=':
        if(num1 == num2){
            cout <<"Right" <<endl;
        }else {
           cout <<"Wrong" <<endl;
        }
        break;
    case '>':
        if( num1 > num2){
            cout <<"Right" <<endl;
        }else {
            cout <<"Wrong" <<endl;
        }
        break;
    case '<':
        if(num1 < num2){
            cout <<"Right" <<endl;
        }else {
            cout <<"Wrong";
        }
        break;
    }
    return 0;
}
