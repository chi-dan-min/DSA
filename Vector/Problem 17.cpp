#include<bits/stdc++.h>

using namespace std;

vector<char> convertNumber(long long n){
	vector<char> v;
	while(n){
		v.push_back(n % 2 + '0');
		n /= 2;
	}
	while(v.size() < 64)
		v.push_back('0');
	reverse(v.begin(),v.end());
	return v;
}

int main(){
    int t; cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<char> bin = convertNumber(n);
        for(char x : bin){
            cout << x;
        }
        cout << endl;
    }
    return 0;
}
