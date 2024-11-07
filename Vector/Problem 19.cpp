#include<bits/stdc++.h>

using namespace std;

bool checkPrimeNumber(int n){
	if(n < 2)
		return false;
	for(int i = 2; i < n; i++){
		if(n % i == 0)
			return false;
	}
	return true;
}

int main(){
    int n;
    vector<int> primeList, unPrimeList;
    while(cin >> n){
    	if(checkPrimeNumber(n))
    		primeList.push_back(n);
    	else
    		unPrimeList.push_back(n);
	}
	reverse(primeList.begin(),primeList.end());
	for(int x : primeList)
		cout << x << ' ';
	cout << endl;
	for(int x : unPrimeList)
		cout << x << ' ';
    return 0;
}
