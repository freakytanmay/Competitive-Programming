#include<bits/stdc++.h>
#include<cctype>
using namespace std;
string remVowel(string str);
int main(){
    string arr;
    int count=0;
    cin>>arr;

    
    transform(arr.begin(), arr.end(), arr.begin(), ::tolower);
    int l =arr.length();
    //cout<<(remVowel(arr))<<endl; 
    for(int i=0; i<l; i++){
    if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='y'){
        for(int j=i; j<l; j++){
            arr[j]=arr[j+1];
        }
        count++;
    i--;
    l--;
    }
    }
    for(int i=0; i<arr.length()-count; i++){
    cout<<"."<<arr[i];
    }

    
    
    
  

}
string remVowel(string str)
{
    regex r("[aeiouAEIOU]");
     
    return regex_replace(str, r,"");
}