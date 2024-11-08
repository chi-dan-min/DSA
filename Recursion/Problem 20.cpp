#include<bits/stdc++.h>

using namespace std;

int process(int n){
	if(n == 1)
		return 0;
	int a = INT_MAX, b = INT_MAX, c = INT_MAX;
	if(n % 2 == 0)
		a = 1 + process(n / 2);
	if(n % 3 == 0)
		b = 1 + process(n / 3);
	c = 1 + process(n - 1);
	return min({a, b, c});
}

int main(){
	long long n;
	cin >> n;
	cout << process(n);
	return 0;
}
