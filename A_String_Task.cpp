#include<bits/stdc++.h>
using namespace std; 
int main()
{
	char arr[100];
	cin >> arr;
	int n = strlen(arr);
	for (int i = 0; i < n; i++){
		if (arr[i]>='A' && arr[i]<='Z'){
			arr[i] += 32;
		}
		if (arr[i] != 'a' && arr[i] != 'e' && arr[i] != 'i' && arr[i] != 'o' && arr[i] != 'u' && arr[i] != 'y'){
			cout << "." << arr[i];
		}
	}
	cout << endl;
	return 0;
}