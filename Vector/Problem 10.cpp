#include<bits/stdc++.h>

using namespace std;
void find(vector< pair<char, int> > &v, char n){
	for(auto &x : v){
		if(x.first == n){
			x.second ++;
			return;
		}
	}
	v.push_back({n,1});
}
int main(){
	vector< pair<char, int> > v;
	int n;
	cin >> n;
	while(n--){
		char	 x;
		cin >> x;
		find(v,x);
	}
	cout << v.size() << endl;
	for(auto x : v)
		cout << x.first << ' ' << x.second <<endl;

	return 0;
}
