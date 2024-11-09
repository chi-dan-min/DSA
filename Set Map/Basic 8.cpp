#include<bits/stdc++.h>

using namespace std;

int main(){
	map<int, int> myMap;
	int n;
	cin >> n;
	int a[n];
	for(int &x : a){
		cin >> x;
		myMap[x]++;
	}
	for(int x : a){
		if(myMap[x]){
			cout << x << ' ' << myMap[x] << endl;
			myMap[x] = 0;
		}
	}
	return 0;
}

