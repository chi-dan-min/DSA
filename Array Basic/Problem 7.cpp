#include<bits/stdc++.h>

using namespace std;
int a[1001];

int main(){
	int n,ans=INT_MAX;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			ans = min(abs(a[i]-a[j]),ans);
		}
	}
	cout<<ans;
	return 0;
}
