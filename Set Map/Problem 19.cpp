#include<bits/stdc++.h>

using namespace std;
void trim(string &s){
	int start = 0;
	while(s[start] == ' ')
		++start;
	int end = s.size() - 1;
	while(s[end] == ' ')
		--end;
	s = s.substr(start,end - start + 1); 
}
int main(){
	int n;
	cin >> n;
	cin.ignore();
	map<string, vector<string>> myMap;
	while(n--){
		string s;
		getline(cin,s);
		int flag;
		for(int  i = 0; i < s.size(); i++){
			if(s[i] == '-')
				flag = i; 
		}
		string s1 = s.substr(0, flag - 1);
		string s2 = s.substr(flag + 1);
		trim(s1);
		trim(s2);
		auto it = myMap.find(s1);
		
		if(it == myMap.end())
			myMap[s1] = {s2};
		else 
			it->second.push_back(s2);
			
		auto it1 = myMap.find(s2);
		
		if(it1 == myMap.end())
			myMap[s2] = {s1};
		else 
			it1->second.push_back(s1);
	}
	
	for(auto x : myMap){
		cout << x.first << " : ";
		auto v = x.second;
		sort(v.begin(), v.end());
		for(int i = 0; i < v.size() - 1; i++)
			cout << v[i] << ", ";
		cout << v[v.size() - 1] << endl;
	}
	return 0;
}

