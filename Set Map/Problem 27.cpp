#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	map<string, string> myMap;
	while(n--){
		cin.ignore();
		string address, name;
		getline(cin, name);
		cin >> address;
		myMap[address] = name;
	}
	int t;
	cin >> t;
	while(t--){
		string from, to;
		int num;
		cin >> from >> to >> num;
		if(myMap.find(from) == myMap.end())
			cout << "Unknown wallet";
		else
			cout << myMap[from];
			
		cout << " send " << num  << " bitcoin to ";
		
		if(myMap.find(to) == myMap.end())
			cout << "Unknown wallet\n";
		else
			cout << myMap[to] << endl;
	}
	return 0;
}

