#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cin>>year;
    while(true){
        year+=1;
    int a = year / 1000;
    //cout<<a<<endl;
    int b = year / 100 % 10;
    //cout<<b<<endl;
    int c = year / 10 % 10;
    //cout<<c<<endl;
    int d = year % 10;

    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
        cout<<year;
        return 0;
    }
    }
        
    }

