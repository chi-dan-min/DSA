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
		int t, x;
		cin >> t >> x;
		if(t == 1)
			mySet.insert(x);
		else if(t == 2){
			auto it = mySet.find(x);
			if(it != mySet.end())
				mySet.erase(it);
		}
		else if(t == 3){
			auto it = mySet.lower_bound(x);
			if(it != mySet.end())
				cout << *it << endl;
			else
				cout <<"-1\n";
		}
		else {
			auto it = mySet.upper_bound(x);
			if(it == mySet.begin())
				cout << "-1\n";
			else{
				--it;
				cout << *it << endl;
			}	
		}
	}
	return 0;
}

