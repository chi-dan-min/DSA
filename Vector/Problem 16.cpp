#include<bits/stdc++.h>

using namespace std;

int main(){
	vector< vector<int> > v;
	int n, q;
	cin >> n >> q;
	for(int i = 0; i < n; i++){
		int m;
		cin >> m;
		vector<int> row;
		for(int j = 0; j < m; j++){
			int p;
			cin >> p;
			row.push_back(p);
		}
		v.push_back(row);
	}
	for(int i = 0; i < q; i++){
		int x, y;
		cin >> x >> y;
		cout << v[x - 1][y - 1] << endl;
	}
	return 0;
}

