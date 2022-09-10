#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int l = sizeof(n);
    // for(int i=0; i<l; i++){
    if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 744 == 0 || n % 477 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}