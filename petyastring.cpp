#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    string s1,s2;
;
    //int sum1=0,sum2=0;
    // int l1=s1.length();
    // int l2=s2.length();
    cin>>s1>>s2;
    //convert string s1 and s2 into lowercase
    // transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    // transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    
    //sum of string s1 in to ascii character 
    
    
    
    // if(lexicographical_compare(s1,s1+3,s2,s2+3))
    // {
    //     cout<<"-1";
    // }
    // else if(s1==s2){
    //     cout<<"0";
    // }
    // else{
    //     cout<<"1";
    // }
     
    for(int i=0; i<s1.length(); i++){
       if(s1[i]<92){
        s1[i]+=32;
       }
       if(s2[i]<92){
           s2[i]+=32;
       }
    }
    
    //comparison between to string 
    
    if(s1>s2){//sum1>sum2=1
        cout<<1;
    }
    else if(s1<s2){//sum1<sum2=-1
        cout<<-1;

    }
    else{//sum1=sum2=0
        cout<<0;
    }
    return 0;

}