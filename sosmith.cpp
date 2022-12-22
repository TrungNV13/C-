#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll tong_chu_so(ll n){
	ll tmp=0;
	if(n==0) return n;
	while(n){
		tmp+=n%10;
		n/=10;
	}
	return tmp;
}
ll tong_thua_so(ll n){
	int dem=0;
	ll tmp=0;
	if(n==0 || n==1 ){
		return n+1;
	}
	while(n%2==0){
		n/=2;
		++dem;
		tmp+=2;
	}
	for(ll i=3;i<=n;i+=2){
		while(n%i==0){
			n/=i;
			++dem;
			tmp+=tong_chu_so(i);
		}
	}
	if(n>1) {
		tmp+=tong_chu_so(n);
		++dem;
	}
	if(dem==1) tmp++;
	return tmp;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(tong_chu_so(n)==tong_thua_so(n)) cout<<"YES"<<endl;
	 	else  cout<<"NO"<<endl;
	}
}
