#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int k,n,w;
    long long int temp=0,temp1=0,output;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++){
        temp=k*i;
        temp1+=temp;
        
    }
    output = temp1-n;
    if(output<=0){
        cout<<0;
    }
    else{
    cout<<output;
    }
}