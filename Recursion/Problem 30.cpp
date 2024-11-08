#include<bits/stdc++.h>

using namespace std;

void merge(int a[], int l, int r, int m){
	int n1 = m - l + 1;
	int n2 = r - m;
	vector<int> L(n1),R(n2);
	for(int i = l; i <= m; i++)
		L[i - l] = a[i];
	for(int i = m + 1; i <= r; i++)
		R[i - m - 1] = a[i];
	int i = 0, j = 0, index = l;
	while(i < n1 && j < n2){
		if(L[i] < R[j])
			a[index++] = L[i++];
		else
			a[index++] = R[j++];
	}
	while(i < n1)
		a[index++] = L[i++];
	while(j < n2)
		a[index++] = R[j++];
}

void mergeSort(int a[], int l, int r){
	if(l >= r)
		return;
	int m = (l + r) / 2;
	mergeSort(a, l, m);
	mergeSort(a, m + 1, r);
	merge(a, l, r, m);
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	mergeSort(a, 0, n - 1);
	for(int x : a)
		cout << x << ' ';
	return 0;
}

