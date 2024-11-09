#include<bits/stdc++.h>

using namespace std;

int main(){
	set<string> mySet;
	int n;
	cin >> n;
	for(int i = 0; i < n;i++){
		string s;
		cin >> s;
		mySet.insert(s);
	}
	cout << mySet.size() << endl;
	for(string x : mySet){
		cout << x << ' ';
	}
	return 0;
}

