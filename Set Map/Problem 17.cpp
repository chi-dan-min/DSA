#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	map<char, int> myMap;
	for(char c : s)
		myMap[c] ++;
	vector<pair<char, int>> v;
	for(auto x : myMap)
		v.push_back(x);
	sort(v.begin(), v.end(), [](pair<char, int> a, pair<char, int> b){
		if(a.second != b.second)
			return a.second < b.second;
		else
			return a.first < b.first;	
	});
	auto rvit = v.rbegin();
	while(1){
		if(rvit -> second != v.rbegin() -> second){
			rvit--;
			break;
		}	
		rvit++;
	}
	cout << rvit -> first << ' ' << rvit -> second <<endl;
	auto it = v.begin();
	while(1){
		if(it -> second != v.begin() -> second){
			it--;
			break;
		}	
		it++;
	}
	cout << it -> first << ' ' << it -> second <<endl;
	cout << v.size();
	return 0;
}

