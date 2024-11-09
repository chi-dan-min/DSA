#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	char a[n];
	for(char &x : a)
		cin >> x;
	set<char> mySet;
	for(int x : a)
		mySet.insert(x);
	cout << mySet.size() << endl;
	auto it1 = mySet.rbegin();
	auto it2 = mySet.begin();
	cout << *it1 << ' ' << *it2 << ' ';
	it1++;
	it2++;
	cout << *it1 << ' ' << *it2;
	return 0;
}

