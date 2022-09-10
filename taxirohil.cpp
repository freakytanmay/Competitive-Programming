#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            f1++;
        else if (a[i] == 2)
            f2++;
        else if (a[i] == 3)
            f3++;
        else
            f4++;
    }
    int taxi = (f2 / 2) + f4;
    int rem = 0, rem_of_3 = 0;
    if (f2 & 1)
        rem += 2;
    if (f3 > f1)
    {
        taxi += f1;
        rem_of_3 = f3 - f1;
        taxi += rem_of_3;
    }
    else
    {
        taxi += f3;
        rem += (f1 - f3);
    }

    taxi += (rem / 4);
    if ((rem % 4) != 0)
        taxi++;
    cout << taxi << endl;
}