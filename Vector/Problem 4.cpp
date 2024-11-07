#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v;
	int n;
	cin >> n;
	while(n--){
		int x;
		cin >> x;
		v.push_back(x);
	}
	int l,r;
	cin >> l >> r;
	vector<int>::iterator it = v.begin();
	for(int i = l ; i <= r ; i++ ){
		cout << *(it + i) << ' ';
	}
	cout<<endl;
	for(int i = r ; i >= l ; i-- ){
		cout << *(it + i) << ' ';
	}
	return 0;
}
