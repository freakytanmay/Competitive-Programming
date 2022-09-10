#include<bits/stdc++.h>
using namespace std;

int main(){
    float n,a=0;
    int m=0;
    cin>>n;
    a=n/5;
    m=a;
    if(m==a){
        cout<<m;
    }
    else{
        cout<<++m;
    }
}