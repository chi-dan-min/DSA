#include<bits/stdc++.h>

using namespace std;

void input(vector< vector<int> > &v, int n, int m){
	for(int i = 0; i < n; i++){
		vector<int> row;
		for(int j = 0; j < m; j++){
			int x;
			cin >> x;
			row.push_back(x);
		}
		v.push_back(row);
	}
}

void rev(vector< vector<int> > &v,int n){
	for(int i = 0; i < n; i++){
		reverse(v[i].begin(), v[i].end());
	}
}

void output(vector< vector<int> > v,int n , int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << v[i][j] << ' ';
		}
		cout << endl;
	}
}

int main(){
	int n, m;
	vector< vector<int> > v;
	cin >> n >> m;
	input(v, n, m);
	rev(v, n);
	output(v, n, m);
	return 0;
}
