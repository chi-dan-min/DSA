#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	multiset<int> mySet;
	while(n--){
		int x;
		cin >> x;
		mySet.insert(x);
	}
	int q;
	cin >> q;
	while(q--){
		int t;
		cin >> t;
		if(t == 1){
			int x;
			cin >> x;
			mySet.insert(x);
		}
		else if(t == 2){
			int x;
			cin >> x;
			if(mySet.find(x) != mySet.end())
				mySet.erase(x);
		}
		else if(t == 3)
			cout << *(mySet.begin()) << endl;
		else
			cout << *(mySet.rbegin()) << endl;
	}
	return 0;
}

