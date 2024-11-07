#include<bits/stdc++.h>

using namespace std;
int a[1001];

int main(){
	int n,count=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++){
		if(i%2==0&&a[i]%2==0){
			cout<<a[i]<<' ';
			++count;
		}
	}
	if(!count)
		cout<<"NONE";
	return 0;
}
