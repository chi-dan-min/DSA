#include<bits/stdc++.h>

using namespace std;

long long findMax(long long n){
	if(n / 10 == 0)
		return n;
	return max(findMax(n / 10), n % 10);
}

long long findMin(long long n){
	if(n / 10 == 0)
		return n;
	return min(findMin(n / 10), n % 10);
}

int main(){
	long long n;
	cin >> n;
	cout << findMax(n) << ' ' << findMin(n);
	return 0;
}
