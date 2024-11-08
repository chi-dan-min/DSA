#include<bits/stdc++.h>

using namespace std;

vector< pair<int, int> > v;
void process(int a, int b, int c,int n){
	if(n == 1)
		v.push_back({a, c});
	else{
		process(a, c, b, n - 1);
		process(a, b, c, 1);
		process(b, a, c, n - 1);
	}
}

int main(){
	int n;
	cin >> n;
	process(1, 2, 3, n);
	cout << v.size() << endl;
	for(auto x : v)
		cout << x.first << ' ' << x.second <<endl;
	return 0;
}

