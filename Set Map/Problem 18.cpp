#include<bits/stdc++.h>

using namespace std;

int main(){
	set<string> mySet;
	string s;
	while(cin >> s)
		mySet.insert(s);
	cout << mySet.size() <<endl;
	cout << *(mySet.begin()) << ' ' << *(mySet.rbegin());
	
	return 0;
}

