#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,flag=0;
    cin>>n;
    int arr[100];
    for(i=1; i<=n; i++){
        cin>>arr[i];
    }
    for(i=1; i<=n; i++){
        if(arr[i]==1){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
    return 0;
}