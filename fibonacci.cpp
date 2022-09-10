#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,temp=0;
    cin>>n;
    int a1=0,a2=1;
    cout<<a1<<" "<<a2<<" ";

    for(int i=2; i<=n; i++){
        temp=a1+a2;
        cout<<temp<<" ";
        a1=a2;
        a2=temp;
    }
    // for(int i=2; i<=n; i++){
    //     cout<<temp[i]<<" ";
    // }
    return 0;
}