#include<bits/stdc++.h>
using namespace std;
int main (){
    int t,a,b;
    int res;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int greater=max(a,b);
        res=7-greater;
        cout<<res<<endl;
    }
}