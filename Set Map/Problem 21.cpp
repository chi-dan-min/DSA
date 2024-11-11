#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	set<char> mySet;
	cin >> n;
	while(n--){
		char c;
		cin >> c;
		mySet.insert(c);
	}
	cout << mySet.size() << endl;
	for(auto x : mySet)
		cout << x  << ' ' ;
	cout << endl;
	for(auto it = mySet.rbegin(); it != mySet.rend(); it++)
		cout << *it << ' ' ;
	return 0;
}

