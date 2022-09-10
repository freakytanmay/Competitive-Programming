#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, a, o=0,o1=0;
    cin >> m >> n >> a;
    o = ((m + a - 1) / a); 
    o1= ((n + a - 1) / a); 
    cout<<o*o1;
    return 0;
    
}