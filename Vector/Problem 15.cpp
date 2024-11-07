#include<bits/stdc++.h>

using namespace std;

void input(vector<int> &v){
	int n;
	cin >> n;
	while(n--){
		int x;
		cin >> x;
		v.push_back(x);
	}
}

vector<int> updateVector(vector<int> v){
	vector<int> ans;
	ans.push_back(v[0]);
	for(int i = 1; i < v.size(); i++){
		if(v[i] != v[i-1])
			ans.push_back(v[i]);
	}
	return ans;
}

void output(vector<int> v){
	for(int x : v)
		cout << x << ' '; 
}

int main(){
	vector<int> v;
	input(v);
	v = updateVector(v);
	output(v);
	return 0;
}
