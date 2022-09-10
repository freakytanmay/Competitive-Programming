#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, s1 = "Tetrahedron", s2 = "Cube", s3 = "Octahedron", s4 = "Dodecahedron", s5 = "Icosahedron";
    int n, sum = 0;
    cin >> n;
    while (n--)
    {
        cin >> s;
        if (s == s1)
        {
            sum += 4;
        }
        else if (s == s2)
        {
            sum += 6;
        }
        else if (s == s3)
        {
            sum += 8;
        }
        else if (s == s4)
        {
            sum += 12;
        }
        else
        {
            sum += 20;
        }
    }

    cout << sum;

    return 0;
}
