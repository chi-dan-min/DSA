#include<bits/stdc++.h>

using namespace std;

int findSumEven(long long n){
	if(n / 10 == 0){
		if(n % 2 == 0)
			return n;
		else 
			return 0;
	}
	else{
		if(n % 2 == 0)
			return n % 10 + findSumEven(n / 10);
		else
			return findSumEven(n / 10);
	}
}

int findSumOdd(long long n){
	if(n / 10 == 0){
		if(n % 2 == 1)
			return n;
		else 
			return 0;
	}
	else{
		if(n % 2 == 1)
			return n % 10 + findSumOdd(n / 10);
		else
			return findSumOdd(n / 10);
	}
}

int main(){
	long long n;
	cin >> n;
	cout << findSumEven(n) << endl;
	cout << findSumOdd(n);
	return 0;
}
