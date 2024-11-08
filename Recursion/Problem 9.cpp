#include<bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

long long binaryExponentiation(long long a, long long b){
	if(b == 0)
		return 1;
	long long temp = binaryExponentiation(a, b / 2) % mod;
	temp = temp * temp;
	temp %= mod;
	if(b % 2 == 1){
		temp *= a;
		temp %= mod;
	}
	return temp;
}

int main(){
	long long a, b;
	cin >> a >> b;
	cout << binaryExponentiation(a,b);
	return 0;
}
