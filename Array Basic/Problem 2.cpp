#include<bits/stdc++.h>

using namespace std;
int a[1001];
bool checkPrimeNumber(int n){
	if(n<2)
		return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	}
	return true;
}

int main(){
	int n,sum = 0,countPrime = 0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(checkPrimeNumber(a[i])){
			sum += a[i];
			countPrime ++;
		}
	}
	cout<<fixed<<setprecision(3)<<1.*sum/countPrime;
	return 0;
}
