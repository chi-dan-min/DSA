#include<bits/stdc++.h>

using namespace std;

int upperBound(int a[], int l, int r, int k){
	if(l > r)
		return INT_MIN;
	int m = (l + r) / 2;
	if(a[m] > k)
		return max(m, upperBound(a, m + 1, r, k));
	else 
		return upperBound(a, l, m - 1, k);
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	int k; 
	cin >> k;
	int ans = upperBound(a, 0, n - 1, k);
	ans == INT_MIN ? cout << n : cout << ans;
	return 0;
}

