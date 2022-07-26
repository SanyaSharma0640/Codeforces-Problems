#include<bits/stdc++.h>
using namespace std;
int main (){
    string msg="hello";
    string str;
    cin>>str;
    int n=str.length();
    int a=0, count=0;
    for(int i=0;i<n;i++){
        if(str[i]==msg[a]){
            a++;
            count++;
        }
    }
    if(count==5)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}