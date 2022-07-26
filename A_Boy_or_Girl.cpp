#include<bits/stdc++.h>
using namespace std;
int main (){
    char str[100];
    cin>>str;
    int n=strlen(str);
    int count=0;
    sort(str,str+n);
    for(int i=0;i<n;i++){
            if(str[i]!=str[i+1])
            count++;
    }
    if(count%2==0)
    cout<<"CHAT WITH HER!"<<endl;
    else
    cout<<"IGNORE HIM!"<<endl;
}