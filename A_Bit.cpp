#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int res=0;
    string str;
    for(int i=0;i<n;i++){
        cin>>str;
        if(str=="++X" || str=="X++")
        res=res+1;
        else
        res=res-1;
    }
    cout<<res;
}