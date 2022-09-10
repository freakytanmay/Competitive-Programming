#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2,flag=0;
    int t,l;
    cin>>t;
    while(t--){
        cin>>l;
        for(int i=0; i<l; i++){
            cin>>str1;
        }
        for(int i=0; i<l; i++){
            cin>>str2;
        }
        for(int i=0; i<str1.length(); i++){
        if(str1[i]!="G" && str1[i]!="B"){
            flag=1;
        }
        }
        else{

        }
    }
return 0;
}