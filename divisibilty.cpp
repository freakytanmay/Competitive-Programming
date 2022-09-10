#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    long int a[100000],b[100000],t[100000];
    
    cin>>n;
    int i;
    for(i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    for(i=0; i<n; i++){
       // cout<<a[i]<<b[i];
        if(a[i]%b[i]==0){
            t[i]=0;
        }
        else{
            t[i]=b[i]-(a[i]%b[i]);
        }
    }
    for(i=0; i<n; i++){
        cout<<t[i]<<endl;
    }
    return 0;
}