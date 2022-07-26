#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin >> str;
    bool flag = false;
    int one_count = 0,zero_count = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '1'){
            one_count++;
            zero_count = 0;
        }
        else{
            zero_count++;
            one_count = 0;
        }
        if(one_count == 7 || zero_count == 7){
            flag = true;
            break;
        }
    }
    if(flag == true)
    cout << "YES" << endl;
    else
     cout << "NO" << endl;
    return 0;
}