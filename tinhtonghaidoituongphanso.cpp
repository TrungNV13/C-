#include<bits/stdc++.h>
using namespace std;
#define ll long long
class PhanSo{
    private:
        ll tu,mau;
    public:
        PhanSo(){}
        PhanSo(ll tu, ll mau){
            this->tu=tu;
            this->mau=mau;
        }
        void rutgon(){
            ll gcd=__gcd(this->tu,this->mau);
            this->tu/=gcd;
            this->mau/=gcd;
        }
        friend istream& operator >> ( istream &is , PhanSo &a){
           is>>a.tu>>a.mau;
           return is;
        }
        friend ostream& operator << (ostream &os, PhanSo a){
             return os<<a.tu<<"/"<<a.mau;
        }
        friend PhanSo operator + (PhanSo a, PhanSo b){
            PhanSo sum;
            sum.tu=a.tu*b.mau+a.mau*b.tu;
            sum.mau=a.mau*b.mau;
            sum.rutgon();
            return sum;
        }
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
