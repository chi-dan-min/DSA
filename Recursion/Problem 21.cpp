#include<bits/stdc++.h>

using namespace std;

bool checkSymmetry(int a[], int l , int r){
	if(l > r)
		return true;
	return a[l] != a[r] ? false : checkSymmetry(a, l + 1, r - 1);
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	checkSymmetry(a,0,n -1) ? cout << "YES" : cout << "NO";
	return 0;
}
