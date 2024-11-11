#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	map<int, int> myMap;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			int x;
			cin >> x;
			if(myMap[x] == i)
				myMap[x] = i + 1;
		}
	}
	int count = 0;
	for(auto x : myMap){
		if(x.second == n){
			++count;
			cout << x.first << ' ';
		}
			
	}
	if(count == 0)
		cout << "NOT FOUND";

	return 0;
}

