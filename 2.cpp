#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, count;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> a;
        count=0;
        cin>>s;
                   
        sort(s.begin(), s.end()); 
        for (int i = 0; i < a; i++)
        {
            if (s[i] == s[i + 1])
            {
                count=count+1;
            }
            else
            {
                count=count+2;
            }
        }
        cout << count << endl;
    }
    return 0;
}
