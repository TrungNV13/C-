#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
    string maSV,ten,lop,email;
    public:
    friend istream& operator >> ( istream &in , SinhVien &a){
        in>>a.maSV;
        cin.ignore();
        getline(in,a.ten);
        in>>a.lop>>a.email;
        return in;
    }
    string lop_lop(){
        return lop;
    }
    string id(){
        return maSV;
    }
    friend ostream& operator << (ostream &out, SinhVien &a){
        return out<<a.maSV<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<endl;
    }
};
bool cmp(SinhVien a , SinhVien b){
    if(a.lop_lop() == b.lop_lop() ) return a.id() < b.id();
    return a.lop_lop() < b.lop_lop();
}
void sapxep(SinhVien ds[], int n){
    sort(ds, ds + n, cmp);
}
int main(){
    int n;
    cin>>n;
    cin.ignore();
    SinhVien *ds;
    ds= new SinhVien[n];
    for(int i=0;i<n;i++) cin>>ds[i];
    sapxep(ds,n);
    for(int i=0;i<n;i++) cout<<ds[i];
}