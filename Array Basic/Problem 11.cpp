#include<bits/stdc++.h>

using namespace std;
long long a[1000001];
bool checkFiboNumber(long long F[],long long n){
	for(int i=0;i<93;i++){
		if(n == F[i])
			return true;
	}
	return false;
}
int main(){
	int n,Count = 0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	long long F[100]; 
	F[0]=0; 
	F[1]=1; 
	for(int i=2; i<93; i++){
		F[i] = F[i-1] + F[i-2];
	}
	for(int i=0;i<n;i++){
		if(checkFiboNumber(F,a[i])){
			cout<<a[i]<<' ';
			++Count;
		}
	}
	if(!Count)
		cout<<"NONE";
	return 0;
}
