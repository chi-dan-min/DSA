#include<bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

void hexConvert(long long n){
	if(n == 0)
		return;
	hexConvert(n / 16);
	if(n%16 >= 10)
		cout << char(55 + n % 16);
	else
		cout << n % 16;
}

int main(){
	long long n;
	cin >> n;
	if(n == 0)
		cout << 0;
	else
		hexConvert(n);
	return 0;
}
