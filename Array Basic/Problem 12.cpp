#include<bits/stdc++.h>

using namespace std;
int a[1000001];

int main(){
	int n,maxOfArray = INT_MIN,minOfArray = INT_MAX;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		maxOfArray = max(maxOfArray,a[i]);
		minOfArray = min(minOfArray,a[i]);
	}
	
	int posMin = 0, posMax = n;
	for(int i=0;i<n;i++){
		if(i<posMax && a[i] == maxOfArray){
			posMax = i;
		}
		if(a[i] == minOfArray)
			posMin = i;
	}
	
	cout<<posMin<<' '<<posMax;
	return 0;
}
