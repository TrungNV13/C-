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
    return a.id() < b.id();
}
void sapxep(SinhVien ds[], int n){
    sort(ds, ds + n, cmp);
}
int main(){
    int n;
    SinhVien ds[10005];
    int i=0;
    while( cin>>ds[i] ){
        i++;
    }
    n=i;
    sapxep(ds,n);
    for(int i=0;i<n;i++) cout<<ds[i];
}
