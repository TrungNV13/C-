#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll F[8];
void shh(ll a[]){
	for(int i=0;i<=6;i++)F[i]=pow(2,a[i]-1)*(pow(2,a[i])-1);
}
main(){
	ll a[]={2,3,5,7,13,17,19};
	shh(a);
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		int count=0;
		for(ll i=0;i<7;i++){
			if(n==F[i]) {
				count++;
				break;
			}
		}
		if(count>0) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}