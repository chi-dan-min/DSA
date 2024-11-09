#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	set<char> mySet, printed;
	char a[n], b[m];
	for(char &x : a)
		cin >> x;
	for(char &x : b){
		cin >> x;
		mySet.insert(x);
	}
	for(char x : a){
		if(mySet.find(x) != mySet.end() && printed.find(x) == printed.end()){
			cout << x << ' ';
			printed.insert(x);
		}
	}	
	
	return 0;
}

