#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v;
	int n;
	cin >> n;
	while(n--){
		int x, y, z;
		cin >> x >> y >> z;
		v.push_back(x + y + z);
	}
	
	for(int x : v)
		cout << x << ' ';

	return 0;
}
