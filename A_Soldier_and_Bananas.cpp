#include<bits/stdc++.h>
using namespace std;
int main (){
    int k,n,w;
    cin>>k>>n>>w;
    int res=0;
    for(int i=1;i<=w;i++){
        res=res+(i*k);
    }
        if(res<=n){
            cout<<0<<endl;
        }
            else
            cout<<res-n<<endl;
            return 0;
}