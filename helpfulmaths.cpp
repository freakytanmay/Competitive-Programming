#include <bits/stdc++.h>
using namespace std;

int main()
{
     string s;
     cin >> s;
     sort(s.begin(), s.end());
     int l = s.length();

     for (int i = l / 2; i < l; i++)
     {
          if (i == l - 1)
          {
               cout << s[i];
          }
          else
          {
               cout << s[i] << "+";
          }
     }

     return 0;
}