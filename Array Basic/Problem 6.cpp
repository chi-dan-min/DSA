#include<bits/stdc++.h>

using namespace std;
int a[1001];

int main(){
	int n,k,ans=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>k;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i] + a[j] == k)
				++ans;
		}
	}
	cout<<ans;
	return 0;
}
