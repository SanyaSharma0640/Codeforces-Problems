#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    char str[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>str[i];
        if(i>0){
            if(str[i-1]==str[i])
                count++;
            }
        }
    cout<<count;
}