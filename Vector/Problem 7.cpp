#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<double> v;
	int n;
	cin >> n;
	while(n--){
		int x, y;
		cin >> x >> y;
		v.push_back(sqrt( x * x + y * y));
	}
	
	for(double x : v)
		cout << fixed << setprecision(2) << x << ' ';

	return 0;
}
