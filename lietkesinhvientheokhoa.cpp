#include<bits/stdc++.h>
using namespace std;
class khoa{
    private:
    string khoa__,check;
    public:
    friend istream& operator >> (istream &in, khoa &a){
        in>>a.khoa__;
        a.check=a.khoa__.substr(2,2);
        return in;
    }
    string clop(){
        return check;
    }
    friend ostream& operator << (ostream &out, khoa &a){
        return out<<a.khoa__;
       
    }
};
class SinhVien{
    private:
    string MaSV,Ten,Lop,Email,temp;
    public:
    friend istream& operator >> (istream &in , SinhVien &a){
        in>>a.MaSV;
        in.ignore();
        getline(in,a.Ten);
        in>>a.Lop>>a.Email;
        a.temp= a.Lop.substr(1,2);
        return in;
    }
    string glop(){
        return temp;
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
    khoa *cl;
    cl = new khoa[q];
    for(int i=0;i<q;i++) cin>>cl[i];
    for(int i=0;i<q;i++){
        cout<<"DANH SACH SINH VIEN KHOA "<<cl[i]<<":"<<endl;
        for(int j=0;j<n;j++){
            if(ds[j].glop() == cl[i].clop() ) cout<<ds[j];
        }
    }
}
