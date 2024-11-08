#include<bits/stdc++.h>

using namespace std;

int	firstPos(int a[], int l, int r, int k){
	if(l > r)
		return INT_MAX;
	int m = (l + r) / 2;
	if(a[m] == k)
		return min(m, firstPos(a, l, m - 1, k));	
	else if(a[m] < k)
		return firstPos(a, m + 1, r, k);
	else
		return firstPos(a, l, m - 1, k);
}

int	lastPos(int a[], int l, int r, int k){
	if(l > r)
		return INT_MIN;
	int m = (l + r) / 2;
	if(a[m] == k)
		return max(m, lastPos(a, m + 1, r, k));	
	else if(a[m] < k)
		return lastPos(a, m + 1, r, k);
	else
		return lastPos(a, l, m - 1, k);
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	int k; 
	cin >> k;
	int l = firstPos(a, 0, n - 1, k);
	if(l == INT_MAX)
		cout << 0;
	else{
		int r = lastPos(a , 0, n - 1, k);
		cout << r - l + 1;
	}
	return 0;
}

