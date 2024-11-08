#include<bits/stdc++.h>

using namespace std;

bool checkEven(int a[] , int last, int pos, int n){
	if(pos == n)
		return true;
	return a[pos] <= last ? false : checkEven(a, a[pos], pos + 1, n);
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	checkEven(a, a[0], 1, n-1) ? cout << "YES" : cout << "NO";
	return 0;
}


