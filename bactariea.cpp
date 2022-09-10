#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    if(n%2==0){
        cout<<1;
    }
    else{
        int sum = n/2;
        cout<<sum;
    }
    return 0;
}