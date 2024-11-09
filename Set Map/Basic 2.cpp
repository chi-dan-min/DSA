#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	set<int> mySet;
	for(int x : a)
		mySet.insert(x);
	cout << mySet.size() << endl;
	for(auto it = mySet.rbegin(); it != mySet.rend(); it++)
		cout << *it << ' ';
	return 0;
}

