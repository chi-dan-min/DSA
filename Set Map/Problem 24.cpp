#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	map<string, int> myMap;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		myMap[s] ++;
	}
	vector<pair<string, int>> v;
	for(auto x : myMap){
		cout << x.first << ' ' << x.second << endl;
		v.push_back(x);
	}
	cout << endl;
	sort(v.begin(), v.end(), [](pair<string, int> a, pair<string, int> b){
		if(a.second != b.second)
			return a.second < b.second;
		else
			return a.first < b.first;
	});
	cout << v.begin() -> first << ' ' << v.begin() -> second << endl;
	cout << v.rbegin() -> first << ' ' << v.rbegin() -> second << endl;
	return 0;
}

