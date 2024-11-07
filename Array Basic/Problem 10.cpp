#include<bits/stdc++.h>

using namespace std;
int a[1001];
int Count[100001];
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
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];

	for(int i=1;i<n-1;i++){
		int sumLeft = 0, sumRight = 0;
		for(int j=0;j<i;j++){
			sumLeft += a[j];
		}
		for(int j=i+1;j<n;j++){
			sumRight += a[j];
		}
		if(checkPrimeNumber(sumLeft) && checkPrimeNumber(sumRight))
			cout<<i<<' ';
	}
		
	return 0;
}
