#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	map<char, int> myMap;
	while(n--){
		char c;
		cin >> c;
		myMap[c] ++ ;
	}
	auto it = myMap.begin();
	cout << it -> first << ' ' << it -> second << endl << endl;
	auto itRv = myMap.rbegin();
	cout << itRv -> first << ' ' << itRv -> second << endl << endl;
	
	for(auto it = myMap.begin(); it != myMap.end(); it++)
		cout << it -> first << ' ' << it -> second << endl;
	cout << endl;
	for(auto it = myMap.rbegin(); it != myMap.rend(); it++)
		cout << it -> first << ' ' << it -> second << endl;
	return 0;
}

