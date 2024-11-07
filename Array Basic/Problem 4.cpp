#include<bits/stdc++.h>

using namespace std;
int a[1001];

int main(){
	int n,x,smallX=0,bigX=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>x;
	for(int i=0;i<n;i++){
		if(a[i]<x)
			smallX++;
		else if(a[i]>x)
			bigX++;
	}
	cout<<smallX<<"\n"<<bigX;
	return 0;
}
