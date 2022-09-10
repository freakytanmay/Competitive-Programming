#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c;
    char m, n;
    cin >> a >> b;
    int a1, b1;
    a1 = a.length();
    b1 = b.length();
    cout << a1 <<" "<< b1<<endl;
    cout << a+b<<endl;
    m=a[0];
    n=b[0];
    a[0]=n;
    b[0]=m;
    cout<<a<<" "<<b;
    return 0;
}