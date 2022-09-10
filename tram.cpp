#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,curr=0,capacity=0,a,b;
  cin>>n;

  while(n){
    cin>>a>>b;
    curr=curr-a;
    curr=curr+b;
    if(curr>capacity){
        capacity=curr;
    }
    n--;
  }
  cout<<capacity;
}