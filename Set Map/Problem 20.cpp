#include<bits/stdc++.h>

using namespace std;

int main(){
	map<string,pair<int, int>> myMap;
	string s;
	int a, b;
	while(cin >> s){
		cin >> a >> b;
		auto it = myMap.find(s);
		if(it == myMap.end())
			myMap[s] = {a, a * b};
		else {
			(it -> second).first += a;
			(it -> second).second += a * b;
		}
	}
	for(auto it = myMap.rbegin(); it != myMap.rend(); it++){
		double tb = 1.0 * (it -> second).second / (it -> second).first;
		cout << it -> first << " : " << fixed << setprecision(2) << tb << endl;
	}
	return 0;
}

