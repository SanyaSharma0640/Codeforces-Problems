#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    int res;
    string str;
    cin>>t;
    while(t--){
        cin>>str;
        int n=str.length();
        stack<char> s;
        for(int i=0;i<n;i++){
            if(str[i]==')' && !s.empty()){
                if(s.top()=='(')
                s.pop();
                else
                s.push(str[i]);
            }
            else
            s.push(str[i]);
        }
        int len=s.size();
        int n=0;
        while(!s.empty() && s.top=='('){
            s.pop();
            n++;
        }
        res=len/2+res%2;
        cout<<res<endl;
    }
}