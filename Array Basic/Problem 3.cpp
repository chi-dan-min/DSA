#include<bits/stdc++.h>

using namespace std;
int a[1001];

int main(){
	int n,ans=0,minNum=INT_MAX;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		minNum=min(minNum,a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i] == minNum)
			++ans;
	}
	cout<<ans;
	return 0;
}
