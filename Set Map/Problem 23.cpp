#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	map<int, int> myMap;
	cin >> n;
	int a[n];
	for(int &x : a){
		cin >> x;
		myMap[x] ++;
	}
	for(auto x : myMap){
		if(x.second % 2 == 0)
			cout << x.first << ' ' << x.second << endl;
	}
	cout << endl;
	for(auto it = myMap.rbegin(); it != myMap.rend(); it++){
		if(it -> second % 2 == 0)
			cout << it -> first << ' ' << it -> second << endl;
	}
	
	return 0;
}

