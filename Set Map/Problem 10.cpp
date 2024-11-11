#include<bits/stdc++.h>

using namespace std;

int main(){
	int m, n;
	cin >> n >> m;
	set<int> mySet, res;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		mySet.insert(a[i]);
	}
	for(int i = 0; i < m; i++){
		int x;
		cin >> x;
		if(mySet.find(x) != mySet.end())
			res.insert(x);
	}
	for(int i = 0; i < n; i++){
		if(res.find(a[i]) != res.end()){
			cout << a[i] << ' ';
			res.erase(a[i]);
		}
			
	}
	return 0;
}

