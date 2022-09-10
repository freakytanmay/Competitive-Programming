#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n,m,t,count=0;
    cin>>n>>m;
    t=n*m;

    while(t--){
        cin>>s;
        if(s=="B" || s=="W" || s=="G"){
            count=1;
        }
        else{
            count=2;
            break;
        }
    }

    if(count==1){
        cout<<"#Black&White";
    }
    else{
        cout<<"#Color";
    }

  
}