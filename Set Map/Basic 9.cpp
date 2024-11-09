#include<bits/stdc++.h>

using namespace std;

int main(){
	map<pair<int, int>, int> myMap;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int a, b;
		cin >> a >> b;
		myMap[{a, b}]++;
	}
	vector< pair< pair<int, int>, int> > v;
	for(auto x : myMap)
		v.push_back(x);
	sort(v.begin(), v.end(),[](pair< pair<int, int>, int> a, pair< pair<int, int>, int> b){
		auto x = a.first, y = b.first;
		if(x.first != y.first)
			return x.first < y.first;
		else
			return x.second < y.second;
	});
	
	for(auto x : v)
		cout << x.first.first << ' ' << x.first.second << ' ' << x.second << endl;
	return 0;
}

