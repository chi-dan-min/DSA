#include<bits/stdc++.h>

using namespace std;

bool checkEven(int a[] , int pos, int n){
	if(pos == n)
		return true;
	return a[pos] % 2 ? false : checkEven(a, pos + 1, n);
}



int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	checkEven(a, 0, n-1) ? cout << "YES" : cout << "NO";
	return 0;
}

