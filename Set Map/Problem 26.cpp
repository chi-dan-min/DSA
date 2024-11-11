#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	map<string, int> myMap;
	while(cin >> s)
		myMap[s]++;
	for(auto x : myMap)
		cout << x.first << ' ' << x.second << endl;
	return 0;
}

