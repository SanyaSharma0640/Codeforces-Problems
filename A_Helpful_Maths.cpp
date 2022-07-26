#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int n=str.length();
    char arr[100];
    int j=0;
    for(int i=0;i<n;i++){
        if(str[i]!='+'){
            arr[j]=str[i];
            j++;
        }
    }
    sort(arr,arr+j);
    for(int i=0;i<j;i++){
        if(i==j-1)
        cout<<arr[i]<<endl;
        else
        cout<<arr[i]<<'+';
    }
    return 0;
}