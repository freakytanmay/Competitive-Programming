#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m[10],c[10],mishka=0,chris=0;
    cin>>n;
    int i=0;
    while(n--){
        cin>>m[i]>>c[i];
        if(m[i]>c[i]){
            mishka+=1;
        }
        else if (m[i]<c[i]){
            chris+=1;
        }
        else{

        }
    }
    if(mishka>chris){
        cout<<"Mishka";
    }
    else if(mishka<chris){
        cout<<"Chris";
    }
    else{
        cout<<"Friendship is magic!^^";
    }
    return 0;
}