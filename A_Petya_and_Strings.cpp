#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,x;
    cin>>s>>x;
    for(int i=0;i<s.size();i++){
        if(tolower(s[i]) - 0 > tolower(x[i]) - 0){
            cout<<1<<endl;
            return 0;
            }
        else if(tolower(s[i]) - 0 < tolower(x[i]) - 0)
        {
            cout<<-1<<endl;
            return 0;
        }
    }
        cout<<0<<endl;
    }