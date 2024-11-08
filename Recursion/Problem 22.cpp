#include<bits/stdc++.h>

using namespace std;

void print1(int a[] , int pos, int n){
	if(pos == n)
		return;
	cout<<a[pos] <<' ';
	print1(a, pos + 1, n);
}

void print2(int a[] , int pos, int n){
	if(pos == n)
		return;
	print2(a, pos + 1, n);
	cout<<a[pos] <<' ';
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	print1(a, 0, n);
	cout << endl;
	print2(a, 0, n);
	return 0;
}

