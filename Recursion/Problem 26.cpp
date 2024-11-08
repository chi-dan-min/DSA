#include<bits/stdc++.h>

using namespace std;

int lowerBound(int a[], int l, int r, int k){
	if(l > r)
		return INT_MAX;
	int m = (l + r) / 2;
	if(a[m] >= k)
		return min(m, lowerBound(a, l, m - 1, k));
	else 
		return lowerBound(a, m + 1, r, k);
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	int k; 
	cin >> k;
	int ans = lowerBound(a, 0, n - 1, k);
	ans == INT_MAX ? cout << n : cout << ans;
	return 0;
}

