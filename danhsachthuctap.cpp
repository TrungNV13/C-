#include<bits/stdc++.h>
using namespace std;
struct thuctap{
    string maSV,ten,lop,email,doanh_nghiep;
    int stt;
};
struct doanhnghiep{
    string ten_dq;
};
void nhap(thuctap ds[], int n){
    for(int i=0;i<n;i++){
        ds[i].stt=i+1;
        cin>>ds[i].maSV;
        cin.ignore();
        getline(cin,ds[i].ten);
        cin>>ds[i].lop>>ds[i].email>>ds[i].doanh_nghiep;
    }
}
void xuat(thuctap a){
    cout<<a.stt<<" "<<a.maSV<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<" "<<a.doanh_nghiep<<endl;
}
bool cmp(thuctap a, thuctap b){
    return a.ten < b.ten;
}
int main(){
    int n;
    cin>>n;
    thuctap *ds;
    ds = new thuctap[n];
    nhap(ds,n);
    int q;
    cin>>q;
    doanhnghiep *dq; dq = new doanhnghiep [q];
    cin.ignore();
    for(int i=0;i<q;i++){
        getline(cin,dq[i].ten_dq);
    }
    sort(ds, ds + n, cmp);
    for(int i=0;i<q;i++){
        for(int j=0;j<n;j++){
            if(ds[j].doanh_nghiep == dq[i].ten_dq ) xuat(ds[j]);
        }
    }
}