#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long tmp=n;
		long long dem=0;
		while(tmp>0){
			dem = dem*10+ tmp%10;
			tmp/=10;
		}
		if(dem==n){
			cout<<"YES"<<endl;
		}	
		else{
			cout<<"NO"<<endl;
		}
	}
}