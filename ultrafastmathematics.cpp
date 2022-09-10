#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr1;
    vector<int> arr2;
    int arr3[100];

    int n1, n2;
    while (1)
    {
        cin >> n1;
        arr1.push_back(n1);
        if (cin.get() == '\n')
            break;
    }

    while (1)
    {
        cin >> n2;
        arr2.push_back(n2);
        if (cin.get() == '\n')
            break;
    }
    int len = arr1.size();
    for (int i = 0; i < len; i++)
    {
        if (arr1[i] == 1 && arr2[i] == 1)
        {
            arr3[i] = 0;
        }
        else if (arr1[i] == 0 && arr2[i] == 0)
        {
            arr3[i] = 0;
        }
        else if (arr1[i] == 0 && arr2[i] == 1)
        {
            arr3[i] = 1;
        }
        else
        {
            arr3[i] = 1;
        }
    }
    for (int i = 0; i < len; i++)
    {
        cout << arr3[i];
    }

    return 0;
}