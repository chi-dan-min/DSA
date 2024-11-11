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
	cout << mySet.size();
	return 0;
}

