#include<bits/stdc++.h>
using namespace std;
struct monhoc{
    string maMH,tenMH;
    int soTC;
    float diemCC,diemKT,diemThi;
};
struct sinhvien{
    string maSV,hoTen,lop;
    monhoc MH;
};
int nhap_monhoc(monhoc a[],int n){
    for(int i=0;i<n;i++){
        getline(cin,a[i].maMH);
        getline(cin,a[i].tenMH);
        cin>>a[i].soTC>>a[i].diemCC>>a[i].diemKT>>a[i].diemThi;
        cin.ignore();
    }
}
void nhap_sinhvien(sinhvien a[],int n){
    for(int i=0;i<n;i++){
        getline(cin,a[i].maSV);
        getline(cin,a[i].hoTen);
        getline(cin,a[i].lop);
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    monhoc *a;
    sinhvien *b; a=new monhoc[n]; b=new sinhvien[m];
    cin.ignore();
    nhap_monhoc(a,n);
    nhap_sinhvien(b,m);
    int k; cin>>k;
    for(int i=0;i<k;i++){
        b[i].MH=a[i];
    }

}