#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v;
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		if(a == 1){
			int b;
			cin >> b;
			v.push_back(b);
		}
		else{
			if(!v.empty())
				v.pop_back();
		}
	}
	if(v.empty()){
		cout<<"EMPTY";
		return 0;
	}
	for(int x : v)
		cout << x <<' ';
	return 0;
}
