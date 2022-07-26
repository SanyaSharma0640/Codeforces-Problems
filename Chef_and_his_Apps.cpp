#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,s=0,x=0,y=0,z=0;
    cin>>t;
    while(t--){
        cin>>s>>x>>y>>z;
        s-=x;
        s-=y;
        int res=0;
        if(z>s){
            if(z-s>max(x,y)){
                res+=2;
            }
            else{
                res++;
            }
        }
        else{
            res=0;
        }
         cout<<res<<endl;
    }
}