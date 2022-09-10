#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, m, l;
    cin >> t;
    while (t--)
    {
        cin >> m;
    l=floor(log10(m) + 1);
    if(l==1){
            cout << m - 1<<endl;
            
    }
    else if(l==2){
            cout << m - 10<<endl;
           
    }
    else if(l==3){
            cout << m - 100<<endl;
           
    }
    else if(l==4){
            cout << m - 1000<<endl;
    }
    else if(l==5){
            cout << m - 10000<<endl;
            
    }
    else if(l==6){
            cout << m - 100000<<endl;
           
    }
    else if(l==7){
            cout << m - 1000000<<endl;
            
    }
    else if(l==8){
            cout << m - 10000000<<endl;
           
    }
    else if(l=9){
            cout << m - 100000000<<endl;
          
    }
    }
    return 0;
}