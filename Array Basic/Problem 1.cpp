#include<bits/stdc++.h>

using namespace std;
int a[1001];
int main(){
	int n,even=0,odd=0,sumEven=0,sumOdd=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			even++;
			sumEven += a[i];
		}
		else{
			odd++;
			sumOdd += a[i];
		}
	}
	cout<<even<<"\n"<<odd<<"\n"<<sumEven<<"\n"<<sumOdd;
	return 0;
}
