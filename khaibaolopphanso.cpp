#include<bits/stdc++.h>
using namespace std;
#define ll long long
class PhanSo{
    public:
    PhanSo(int tu, int mau){
    }
    ll tu;
    ll mau;
    void rutgon(){
        ll gcd=__gcd(tu,mau);
        tu/=gcd;
        mau/=gcd;
    }
    friend istream& operator >> (istream &is, PhanSo &a){
        is>>a.tu>>a.mau;
        return is;
    }
    friend ostream& operator << (ostream &os, PhanSo &a){
        return os<<a.tu<<"/"<<a.mau;
    }
};
int main(){
    PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}