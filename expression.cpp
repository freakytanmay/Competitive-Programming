#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
    cin>>a>>b>>c;
    sum1=a+b*c;
    sum2=a*(b+c);
    sum3=a*b*c;
    sum4=(a+b)*c;
    sum5=a+b+c;

    if(sum1>=sum2 && sum1>=sum3 && sum1>=sum4 && sum1>=sum5){
        cout<<sum1;
    }
    else if(sum2>=sum1 && sum2>=sum3 && sum2>=sum4 && sum2>=sum5)
    {
        cout<<sum2;
    }
    else if(sum3>=sum1 && sum3>=sum2 && sum3>=sum4 && sum3>=sum5){
        cout<<sum3;
    }
    else if(sum4>=sum1 && sum4>=sum2 && sum4>=sum3 && sum4>=sum5 ){
        cout<<sum4;
    }
    else{
        cout<<sum5;
    }
    return 0;
    
}
