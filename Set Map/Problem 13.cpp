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
		if(mySet.find(x) != mySet.end())
			mySet.erase(x);
	}
	for(int x : mySet){
    	cout << x << ' ';
	}
	return 0;
}

