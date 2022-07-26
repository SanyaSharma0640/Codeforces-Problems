#include<iostream>
using namespace std;
int main()
{
    int n,m;
    int ans;
    cin>>m>>n;
    int i= m/2;
    ans = i*n;
    int j= m%2;
    if(j == 1)
    {
        ans +=n/2;
    }
    cout<<ans<<endl;
    return 0;
}