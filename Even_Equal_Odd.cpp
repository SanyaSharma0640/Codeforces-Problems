#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t, count_e=0, count_o=0;;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n=n*2;
        int arr[n];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            count_o+=arr[i]%2;
        }
        count_e=n-count_o;
        if(count_e==count_o)
        cout<<0<<endl;
        else if(count_o>count_e){
            cout<<abs(count_o-n)<<endl;
        }
        else{

        }
    }
}