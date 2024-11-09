#include<bits/stdc++.h>

using namespace std;

int main(){
	map<int, int> myMap;
	int n;
	cin >> n;
	while(n--){
		int x;
		cin >> x;
		myMap[x]++;
	}
	for(auto x : myMap){
		cout << x.first << ' ' << x.second << endl;
	}
	return 0;
}

