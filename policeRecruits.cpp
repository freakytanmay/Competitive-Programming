#include<bits/stdc++.h>
using namespace std;

int main(){
    long int t,sum=0,a,count=0;
    cin>>t;

    while(t--){
        cin>>a;

        if(a!=-1){
            sum+=a;
        }
        else{
            if(sum>0){
                sum-=1;
            }
            else{
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}