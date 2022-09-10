#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,a[100];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        for(int i=1; i<=n; i++){
            if(a[i]!=a[i+1]){
                if(a[i+1]==a[i+2]){
                    cout<<i<<endl;
                    break;
                }
                else{
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}