#include<bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

int sum(long long n){
	if(n == 0)
		return 0;
	return n % 10 + sum(n / 10);
}

int main(){
	long long n;
	cin >> n;
	cout << sum(n);
	return 0;
}
