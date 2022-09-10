#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,k;//index=0;
    //long long int arr[1000];
    cin>>n>>k;
    // for(int i=1; i<=n; i++){
    //     if(i%2==1){
    //         arr[index++]=i;
    //     }
    // }
    // for(int j=1; j<=n; j++){
    //     if(j%2==0){
    //         arr[index++]=j;
    //   }
    // } 
    // for(int i=0; i<n; i++){
    //     if(i==k-1)
    //     cout<<arr[i];
    // }
    if(k<=(n+1)/2){
        cout<<k*2-1;
    }
    else{
        cout<<(k-(n+1)/2 )* 2;
    }    
    return 0;
}