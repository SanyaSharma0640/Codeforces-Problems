#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    string s;
    int count_A=0,count_D=0;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s[i]=='A')
        count_A++;
        else
        count_D++;
    }
    if(count_A>count_D)
        cout<<"Anton"<<endl;
        else if(count_A<count_D)
        cout<<"Danik"<<endl;
        else
        cout<<"Friendship"<<endl;
    return 0;
}