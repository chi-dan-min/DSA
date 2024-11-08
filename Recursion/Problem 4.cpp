#include<bits/stdc++.h>

using namespace std;

long long sum(int n){
	if(n == 1)
		return -1;
	return n % 2 == 1? -n + sum(n-1) : n + sum(n -1);
}

int main(){
	int n;
	cin >> n;
	cout << sum(n);
	return 0;
}
