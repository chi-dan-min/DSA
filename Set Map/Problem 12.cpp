#include<bits/stdc++.h>

using namespace std;

int main(){
	int m, n;
	cin >> n >> m;
	set<int> mySet1, mySet2;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		mySet1.insert(x);
	}
	for(int i = 0; i < m; i++){
		int x;
		cin >> x;
		mySet2.insert(x);
	}
	for(int x : mySet2){
    	if(mySet1.find(x) != mySet1.end())
    		mySet1.erase(x);
    	else
    		mySet1.insert(x);
	}
	for(int x : mySet1)
		cout << x << ' ';
	return 0;
}

