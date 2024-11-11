#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	multiset<int> mySet;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		mySet.insert(x);
	}
		
	int q;
	cin >> q;
	while(q--){
		int a, b;
		cin >> a >> b;
		if(a == 1)
			mySet.insert(b);
		else if(a == 2){
			auto it = mySet.find(b);
			if(it != mySet.end())
				mySet.erase(it);
		}
		else{
			auto it = mySet.find(b);
			if(it != mySet.end())
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}
	return 0;
}

