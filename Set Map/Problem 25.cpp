#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	set<int> mySet;
	cin >> n;
	while(n--){
		int x;
		cin >> x;
		mySet.insert(x);
	}
	cout << mySet.size() << endl;
	auto rvit = mySet.rbegin();
	auto it = mySet.begin();
	cout << *rvit << ' ' << *it << endl;
	++it; 
	++rvit;
	cout << *rvit << ' ' << *it ;
	return 0;
}

