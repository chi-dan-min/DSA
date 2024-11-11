#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	set<pair<int, int>> mySet;
	while(n--){
		int x, y;
		cin >> x >> y;
		mySet.insert({x, y});
	}
	cout << mySet.size();
	return 0;
}

