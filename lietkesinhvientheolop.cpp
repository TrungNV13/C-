#include<bits/stdc++.h>
using namespace std;
class lop__{
    private:
    string lop;
    public:
    friend istream& operator >> (istream &in, lop__ &a){
        in>>a.lop;
        return in;
    }
    string clop(){
        return lop;
    }
    friend ostream& operator << (ostream &out, lop__ &a){
        return out<<a.lop;
       
    }
};
class SinhVien{
    private:
    string MaSV,Ten,Lop,Email;
    public:
    friend istream& operator >> (istream &in , SinhVien &a){
        in>>a.MaSV;
        in.ignore();
        getline(in,a.Ten);
        in>>a.Lop>>a.Email;
        return in;
    }
    string glop(){
        return Lop;
    }
    friend ostream & operator << (ostream &out, SinhVien &a){
        return out<<a.MaSV<<" "<<a.Ten<<" "<<a.Lop<<" "<<a.Email<<endl;
    }
};
int main(){
    int n;
    cin>>n;
    SinhVien *ds;
    ds= new SinhVien[n];
    for(int i=0;i<n;i++) cin>>ds[i];
    int q;
    cin>>q;
    lop__ *cl;
    cl = new lop__[q];
    for(int i=0;i<q;i++) cin>>cl[i];
    for(int i=0;i<q;i++){
        cout<<"DANH SACH SINH VIEN LOP "<<cl[i]<<":"<<endl;
        for(int j=0;j<n;j++){
            if(ds[j].glop() == cl[i].clop() ) cout<<ds[j];
        }
    }
}
