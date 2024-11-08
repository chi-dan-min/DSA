#include<bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

int sum(long long n){
	if(n == 0)
		return 0;
	return 1 + sum(n / 10);
}

int main(){
	long long n;
	cin >> n;
	if(n == 0)
		cout << 1;
	else
		cout << sum(n);
	return 0;
}
