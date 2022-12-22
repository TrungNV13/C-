#include<iostream>
#include<algorithm>
#define ll long long
struct PhanSo{
    ll tu;
    ll mau;
};
void nhap(PhanSo &p){
    std::cin>>p.tu>>p.mau;
}
void rutgon(PhanSo &p){
    ll c= std::__gcd(p.tu,p.mau);
    p.tu/=c;
    p.mau/=c;
}
void in(PhanSo p){
    std::cout<<p.tu<<"/"<<p.mau;
}
int main(){
    struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}