#include<bits/stdc++.h>

using namespace std;

void print1(long long n){
	if( n / 10  > 0)
		print1(n / 10);
	cout << n % 10 << ' ';
}

void print2(long long n){
	cout << n % 10 << ' ';
	if( n / 10  > 0)
		print2(n / 10);
}

int main(){
	long long n;
	cin >> n;
	print1(n);
	cout << endl;
	print2(n);
	return 0;
}
