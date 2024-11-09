#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	set<int> mySet;
	cin >> n >> m;
	int a[n],b[m];
	for(int &x : a)
		cin >> x;
	for(int &x :b){
		cin >> x;
		mySet.insert(x);
	}
		
	for(int x : a){
		if(mySet.find(x) != mySet.end())
			cout << "28tech ";
		else
			cout << "29tech ";
	}
	return 0;
}

