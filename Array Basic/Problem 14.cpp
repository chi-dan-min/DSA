#include<bits/stdc++.h>

using namespace std;
int a[1000001];
int gcd(int a,int b){
	while(b){
		int tmp = a%b;
		a = b;
		b = tmp;
	}
	return a;
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int ans = a[0];
	for(int i=1;i<n;i++)
		ans = gcd(ans,a[i]);
	cout<<ans;	
	return 0;
}
