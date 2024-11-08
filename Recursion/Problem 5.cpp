#include<bits/stdc++.h>

using namespace std;

long long acc(int n){
	if(n <= 1)
		return 1;
	return n * acc(n - 1);
}

int main(){
	int n;
	cin >> n;
	cout << acc(n);
	return 0;
}
