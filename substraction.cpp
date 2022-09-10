#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n,m,temp;
    cin>>m>>n;
    for(int i=0; i<n; i++){
        temp=m%10;
        if(temp==0){
            m=m/10;
        }
        else{
            m=m-1;
        }
    }
    cout<<m;
}