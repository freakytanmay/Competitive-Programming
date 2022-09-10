#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a[100],b[100],answer;
    cin>>n;
    int i;
    for(i=0; i<n; i++){
        cin>>a[i]>>b[i];   
    }
    for(i=0; i<n; i++){
        while(a[i]--){
            cout<<0;
        }
        while(b[i]--){
            cout<<1;
        }
        cout<<endl;
    }
    
    return 0;
}