#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v;
	int m;
	cin >> m;
	while(m--){
		int x;
		cin >> x;
		v.push_back(x);
	}
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		if(a == 1){
			int b , c;
			cin >> b >> c;
			if(b >= 0 && b < v.size())
				v.insert(v.begin() + b,c);
		}
		else{
			int b;
			cin >> b;
			if(b >= 0 && b < v.size()){
				v.erase(v.begin() + b);
			}
		}
	}
	if(v.empty()){
		cout << "EMPTY";
		return 0;
	}
	for(int x : v)
		cout << x << ' ';
	return 0;
}
