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

bool checkPrimeNumber(int n){
	if(n < 2)
		return false;
	for(int  i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return false;
	}
	return true;
}

vector<int> primeList(vector<int> v){
	vector<int> ans;
	for(int x : v){
		if(checkPrimeNumber(x))
			ans.push_back(x);
	}
	return ans;
}

int main(){
	vector<int> v;
	input(v);
	vector<int> res = primeList(v);
	for(int x : res)
		cout << x << ' '; 
	return 0;
}
