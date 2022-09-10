#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, len, flag = 0;
    cin >> t;
    while (t--)
    {
        cin >> len;
        string str;
        cin >> str;
        sort(str.begin(), str.end());
        if (len == 5)
        {
            if (str == "Timru")
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
        else
        {
            flag = 0;
        }

        if (flag == 1)
        {   
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}