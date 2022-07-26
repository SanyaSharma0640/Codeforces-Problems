#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,k;
    cin>>n>>k;
    int res=1;
    k=n;
    while(k--){
        res*=4;
    }
    res-=((1<<n)-1)*3;
    cout<<res-1<<endl;
}