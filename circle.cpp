#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,a[100],b=0;

    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
            b+=a[i];
        }
        if(b%2!=0){
            cout<<"Mike"<<endl;
            b=0;
        }
        else{
            cout<<"Joe"<<endl;
            b=0;
        }
    }
    return 0;
}