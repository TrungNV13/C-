#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct PhanSo{
    ll tu,mau;
    
};
void rutgon(PhanSo &A){
    ll gcd=__gcd(A.tu,A.mau);
    A.tu/=gcd;
    A.mau/=gcd;
}
void process(PhanSo A,PhanSo B){
    PhanSo C,D;
    C.tu=(A.tu*B.mau+A.mau*B.tu)*(A.tu*B.mau+A.mau*B.tu);
    C.mau=pow((A.mau*B.mau),2);
    D.tu=A.tu*B.tu*C.tu;
    D.mau=A.mau*B.mau*C.mau;
    rutgon(C);rutgon(D);
    cout<<C.tu<<"/"<<C.mau<<" "<<D.tu<<"/"<<D.mau<<endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}