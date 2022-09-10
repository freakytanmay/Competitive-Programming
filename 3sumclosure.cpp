#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,a,arr[1000];
cin>>t;
while(t--){
    cin>>a;
    int ans=0;
    for(int i=0; i<a; i++){
        cin>>arr[i];
        ans=ans+arr[i];
    }
    if(ans==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

return 0;
}