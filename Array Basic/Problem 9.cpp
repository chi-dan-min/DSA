#include<bits/stdc++.h>

using namespace std;
int a[1001];
int Count[100001];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		Count[a[i]] += 1;
	}
	for(int i=0;i<n;i++){
		if(Count[a[i]]){
			cout<<a[i]<<' '<<Count[a[i]]<<endl;
			Count[a[i]] = 0;
		}
	}
		
	return 0;
}
