#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int n,res=0;
        cin>>n;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            res+=arr[i];
        }
        res=res/(n+1);
        for(int i=0;i<n;i++){
            cout<<arr[i]-res<<" ";
        }
        cout<<endl;
    }
}