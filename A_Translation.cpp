#include<bits/stdc++.h>
using namespace std;
int main (){
    string str,str1;
    cin>>str>>str1;
    int n=str.length();
    for(int i=0;i<n/2;i++){
        swap(str[i],str[n-i-1]);
    }
    if(str1==str)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
        