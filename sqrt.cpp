#include<bits/stdc++.h>
using namespace std;
int main()
{
int num=841;
for(int i=1; i<num/2; i++){
    if(i*i == num){
        cout<<i;
        break;
    }
}
return 0;
}