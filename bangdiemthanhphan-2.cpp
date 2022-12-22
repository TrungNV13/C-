#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string maSV,ten,lop;
    double diem_1,diem_2,diem_3;
};
bool arrange(  SinhVien a,  SinhVien b ){
    return a.ten < b.ten;
}
void nhap(SinhVien &a){
    cin>>a.maSV;
    scanf("\n");
    getline(cin,a.ten);
    cin>>a.lop;
    cin>>a.diem_1>>a.diem_2>>a.diem_3;
}
void sap_xep(SinhVien a[], int n){  
    sort (a,a+n,arrange);
}
void in_ds(SinhVien a[], int n){
    for(int i=0;i<n;i++){
        cout<<i+1<<" "<<a[i].maSV<<" "<<a[i].ten<<" "<<a[i].lop<<" "
        <<fixed<<setprecision(1)<<a[i].diem_1<<" "<<a[i].diem_2<<" "<<a[i].diem_3<<endl; 
    }     
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
}