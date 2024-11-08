#include<bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

double sum(int n){
	if(n == 1)
		return 1;
	return 1.0 / n + sum(n - 1);
}

int main(){
	int n;
	cin >> n;
	cout << fixed << setprecision(3) << sum(n);
	return 0;
}
