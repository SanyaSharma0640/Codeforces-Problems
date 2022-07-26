#include<bits/stdc++.h>
using namespace std;
int main (){
    int t,a,b;
    int res=0;
    int people=0;
    cin>>t;
    while(t--){
        cin >>a >>b;
        people+=(b-a);
        res=max(res,people);
    }
    cout<<res<<endl;
    return 0;
}