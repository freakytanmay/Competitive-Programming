#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, a[100];

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
    }
    // int l=sizeof(a)/sizeof(a[0]);
    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}