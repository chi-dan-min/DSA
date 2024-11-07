#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector< pair<char,int> > v;
    while(n--){
    	char c;
    	int x;
    	cin >> c >> x;
    	switch(c){
    		case 'a':
    		case 'e':
    		case 'u':
    		case 'i':
    		case 'o':
    			v.push_back({c,x});
    			break;
    		default:
    			break;
		}
	}
	if(v.empty()){
		cout << "28tech";
		return 0;
	}
	reverse(v.begin(),v.end());
	for(auto x : v){
		cout << x. first << ' ' << x.second <<endl;
	}
    return 0;
}
