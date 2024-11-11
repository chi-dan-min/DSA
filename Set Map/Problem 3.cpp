#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	map<int, int> myMap;
	for(int &x : a){
		cin >> x;
		myMap[x]++;
	}
	for(int x : a){
		if(myMap[x]){
			cout << x << ' ';
			myMap[x] = 0;
		}
	}
	return 0;
}

