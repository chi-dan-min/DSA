#include<bits/stdc++.h>

using namespace std;

int find(long long n){
	if(n / 10 == 0){
		return n;
	}
	return find(n / 10);
}

int main(){
	long long n;
	cin >> n;
	cout << find(n);
	return 0;
}
