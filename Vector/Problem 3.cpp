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
	sort(v.begin(),v.end());
	for(int x : v)
		cout << x << ' ';
	cout << endl;
	
	reverse(v.begin(),v.end());
	for(int x : v)
		cout << x << ' ';
	return 0;
}
