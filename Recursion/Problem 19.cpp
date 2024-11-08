#include<bits/stdc++.h>

using namespace std;

bool checkEven(long long n){
	if(n < 10)
		return n % 2 == 0 ? true : false;
	return n % 2 == 1 ? false : checkEven(n / 10);
}

int main(){
	long long n;
	cin >> n;
	checkEven(n) ? cout << "YES" : cout << "NO";
	return 0;
}
