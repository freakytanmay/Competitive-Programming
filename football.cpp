#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int c=0;
    for(int i=0; i<s.length(); i++){
        
       for(int j=i+1; j<i+7; j++){
        if(s[i]==s[j]){
            c=1;
        }   
        else{
            c=0;
            break;
        }
    }
    if(c==1){
        break;
    } 
}
    if(c==1){
    cout<<"YES";
    }
    else{
    cout<<"NO";
    }
    return 0;  
}
    // if(c>=7{
    //cout<<c;
    
    // else{
    //     cout<<"NO";s
    // }
    // return 0;
