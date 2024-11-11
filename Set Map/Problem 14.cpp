#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	set<int> mySet;
	vector<int> v(n), a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	reverse(a.begin(), a.end());
	for(int i = 0; i < n; i++){
		mySet.insert(a[i]);
		v[i] = mySet.size();
	}
	reverse(v.begin(), v.end());
	int q;
	cin >> q;
	while(q--){
		int l;
		cin >> l;
		cout << v[l] << endl;
	}	
	return 0;
}

