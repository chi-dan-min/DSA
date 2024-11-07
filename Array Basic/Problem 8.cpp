#include<bits/stdc++.h>

using namespace std;
int a[1001];

int main(){
	int n;
	cin>>n;
	set<int> Set;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++){
		if(Set.find(a[i]) == Set.end()){
			Set.insert(a[i]);
			cout<<a[i]<<' ';
		}
	}	
	return 0;
}
