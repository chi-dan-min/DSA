#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	map<int,int> myMap;
	cin >> n >> m;
	int a[n],b[m];
	for(int &x : a)
		cin >> x;
	for(int &x :b){
		cin >> x;
		myMap[x]++;
	}
		
	for(int x : a){
		cout << myMap[x] << ' ';
	}
	return 0;
}

