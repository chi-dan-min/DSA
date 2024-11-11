#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	map<int, int> myMap;
	cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	for(int x : a){
		myMap[x] ++;
		cout << myMap[x] << ' ';
	}
	return 0;
}

