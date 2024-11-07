#include<bits/stdc++.h>

using namespace std;
int a[1000001];
int mod = 1e9+7;
int main(){
	long long n,sum=0,product=1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum += a[i] % mod;
		sum %= mod;
		product *= a[i] % mod;
		product %= mod;
	}
	cout<<sum<<"\n"<<product;
	return 0;
}
