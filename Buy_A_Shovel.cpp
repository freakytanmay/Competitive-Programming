#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,x,Shovel=0,temp=0;;
    cin>>k>>x;
    Shovel=k*x;


    if(Shovel%10==0 || Shovel<10){
        cout<<x;
    }
    else{
        temp=Shovel%10;
        cout<<10-temp;
    }
    return 0;
}