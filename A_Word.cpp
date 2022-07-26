#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s;
    int n=s.size();
    int count_1=0, count_2=0;
    for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z')
        count_1++;
        else
        count_2++;
    }
    if(count_1>count_2){
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z')
            s[i]-=32;
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(s[i]>='A' && s[i]<='Z')
            s[i]+=32;
        }
    }
    cout<<s<<endl;
}