#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,ans;
    cin>>n;
         if(n%2==0){
             ans=n/2;
             cout<<ans;
         }
         else{
             ans=n/2;
             ans=ans+1;
             cout<<-ans;
         }
    
    return 0;
}