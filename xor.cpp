#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,a,arr[200],ans;
cin>>t;
while(t--){
    cin>>a;
    ans=0;
    for(int i=0; i<a; i++){
        cin>>arr[i];
    }
    for(int i=0; i<a-1; i++){
        ans=ans^arr[i];
        
    }
    cout<<ans<<endl;
}

return 0;
}

