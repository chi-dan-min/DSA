#include<bits/stdc++.h>

using namespace std;

void input(vector<char> &v){
	char c;
	while(cin>>c){
		v.push_back(c);
	}
}

void update(vector<char> &v){
	for(char &x : v){
		if(islower(x))
			x = toupper(x);
		else if(isupper(x))
			x = tolower(x);
	}
}

void output(vector<char> v){
	for(char x : v)
		cout << x << ' '; 
}

int main(){
	vector<char> v;
	input(v);
	update(v);
	output(v);
	return 0;
}
