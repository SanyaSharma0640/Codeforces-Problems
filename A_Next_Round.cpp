#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,x;
    int count=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(k==n)
    x=arr[k-1];
    else
    x=arr[k-1];
    for(int i=0;i<n;i++){
        if(arr[i]>=x && arr[i]!=0){
            count++;
            }
    }
     cout<<count;
}