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

void rev(vector<int> &v){
	reverse(v.begin(),v.end());
}

void output(vector<int> v){
	for(int x : v)
		cout << x << ' '; 
}

int main(){
	vector<int> v;
	input(v);
	rev(v);
	output(v);
	return 0;
}
