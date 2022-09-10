#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={10,4,5,6,7};
    int len = sizeof(arr)/sizeof(arr[0]);
    //cout<<len;
    for(int i=len-1; i>=0; i--){
        cout<<arr[i];
    }


return 0;
}