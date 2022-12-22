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
PhanSo tong(PhanSo p,PhanSo q){
    PhanSo temp;
    temp.tu=p.tu*q.mau+q.tu*p.mau;
    temp.mau=q.mau*p.mau;
    ll k=std::__gcd(temp.tu, temp.mau);
    temp.tu/=k;
    temp.mau/=k;
    return temp;
}   
void in(PhanSo p){
    std::cout<<p.tu<<"/"<<p.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}