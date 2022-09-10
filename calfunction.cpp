#include<bits/stdc++.h>
using namespace std;

int main(){
    long int  a,even=0,odd=0,ans;
    cin>>a;
    for(int i =1; i<=a; i++){
        if(i%2==0){
            even = even + i;
        }
        else{
            odd = odd + i;
        }
    }
    ans = even - odd;
    cout<<ans;
}