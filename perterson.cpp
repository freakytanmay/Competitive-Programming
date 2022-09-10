#include<bits/stdc++.h>
using namespace std;
int main()
{
int num,fact,main=0,sum,ans=1,temp;
cin>>num;
temp=num;
while(num!=0){
    fact=num%10;
    for(int i=fact; i>0; i--){
        ans=ans*i;
    }
    main=main+ans;
    num=num/10;
   // fact=0;
    ans=1;
}
cout<<main;
if(main==temp){
    cout<<" number is perterson number";
}
else{
    cout<<" number is not perterson number";
}

return 0;
}
