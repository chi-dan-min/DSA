#include<bits/stdc++.h>

using namespace std;

vector<char> convertNumber(long long n){
	vector<char> v;
	while(n){
		if(n % 16 >= 10)
			v.push_back(n % 16 + 'a' - 10);
		else
			v.push_back(n % 16 + '0');
		n /= 16	;
	}
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
