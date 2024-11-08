#include<bits/stdc++.h>

using namespace std;

int bSearch(int a[], int l, int r, int k){
	if(l > r)
		return 0;
	int m = (l + r) / 2;
	if(a[m] == k)
		return 1;
	else if(a[m] < k)
		return bSearch(a,l, m - 1, k);
	else
		return bSearch(a, m + 1, r, k);
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	int k; 
	cin >> k;
	cout << bSearch(a, 0, n - 1, k);
	return 0;
}

