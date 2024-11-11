#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	map<string,string> myMap;
	for(int i = 0; i < n; i++){
		string mssv,name;
		cin >> mssv;
		cin.ignore();
		getline(cin, name);
		myMap[mssv] = name;
	}
	int q;
	cin >> q;
	while(q--){
		string mssv;
		cin >> mssv;
		auto it = myMap.find(mssv);
		if(it == myMap.end())
			cout << "NOT FOUND\n";
		else
			cout << it -> second << endl;
	}
	return 0;
}

