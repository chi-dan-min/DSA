#include<bits/stdc++.h>

using namespace std;

int main(){
	int m, n;
	cin >> n >> m;
	set<int> mySet, res;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		mySet.insert(x);
	}
	for(int i = 0; i < m; i++){
		int x;
		cin >> x;
		mySet.insert(x);
	}
	for(auto it = mySet.rbegin(); it != mySet.rend(); ++it){
    	cout << *it << ' ';
	}
	return 0;
}

