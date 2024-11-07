#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v;
	int n;
	cin >> n;
	while(n--){
		int x;
		cin >> x;
		v.push_back(x);
	}
	int l,r;
	cin >> l >> r;
	reverse(v.begin(),v.end());
	for(int x : v)
		cout << x << ' ';
	cout << endl;
	reverse(v.begin() + l , v.begin() + r + 1);
	for(int x : v)
		cout << x << ' ';
	return 0;
}
