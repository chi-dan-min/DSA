#include<bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

void binaryConvert(long long n){
	if(n == 0)
		return;
	binaryConvert(n / 2);
	cout << n % 2;
}

int main(){
	long long n;
	cin >> n;
	if(n == 0)
		cout << 0;
	else
		binaryConvert(n);
	return 0;
}
