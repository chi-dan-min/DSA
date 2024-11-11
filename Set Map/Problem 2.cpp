#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	set<int> mySet;
	while(n--){
		int x;
		cin >> x;
		mySet.insert(x);
	}
	int q;
	cin >> q;
	while(q--){
		int x;
		cin >> x;
		if(mySet.find(x) != mySet.end())
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}

