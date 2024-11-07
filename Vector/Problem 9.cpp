#include<bits/stdc++.h>

using namespace std;
void find(vector< pair<int, int> > &v, int n){
	for(auto &x : v){
		if(x.first == n){
			x.second ++;
			return;
		}
	}
	v.push_back({n,1});
}
int main(){
	vector< pair<int, int> > v;
	int n;
	cin >> n;
	while(n--){
		int x;
		cin >> x;
		find(v,x);
	}
	for(auto x : v)
		cout << x.first << ' ' << x.second <<endl;

	return 0;
}
