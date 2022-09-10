#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n,s[100],sum=0,output=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s[i];
        sum=sum+s[i];
    }
    if(sum%4==0){
        output=sum/4;
        cout<<output;
    }
    else{
        output=sum/4;
        cout<<output+1;
    }
    
    

    

}