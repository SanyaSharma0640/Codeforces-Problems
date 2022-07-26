#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,res=0;
	cin>>t;
	while(t--){
	    cin>>n;
	    res=(n*60)/20;
	    cout<<res<<endl;
	}
	return 0;
}
