#include<bits/stdc++.h>
using namespace std;
void nomarlize( string &s){  
    for(int i=0;i<s.length();i++){
        s[i]=toupper(s[i]);
    }
}
class nganh{
    private:
    string nganh_hoc,check;
    public:
    friend istream& operator >> (istream &in, nganh &a){
        getline(in,a.nganh_hoc);
        if(a.nganh_hoc == "Ke toan") a.check="DCKT";
        if(a.nganh_hoc == "Cong nghe thong tin") a.check="DCCN";
        if(a.nganh_hoc == "An toan thong tin") a.check="DCAT";
        if(a.nganh_hoc == "Dien tu") a.check="DCDT";
        nomarlize(a.nganh_hoc);
        return in;
    }
    string gnganh(){
        return check;
    }
    friend ostream& operator << (ostream &out, nganh &a){
        return out<<a.nganh_hoc;
    }
};
class SinhVien{
    private:
    string MaSV,Ten,Lop,Email,temp,clas;
    public:
    friend istream& operator >> (istream &in , SinhVien &a){
        in>>a.MaSV;
        in.ignore();
        getline(in,a.Ten);
        in>>a.Lop>>a.Email;
        a.temp=a.MaSV.substr(3,4);
        a.clas=a.Lop.substr(0,1);
        return in;
    }
    string gmasv(){
        return temp;
    }
    string lop_lop(){
        return clas;
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
    nganh *ng;
    ng = new nganh[q];
    cin.ignore();
    for(int i=0;i<q;i++) cin>>ng[i];
    for(int i=0;i<q;i++){
        cout<<"DANH SACH SINH VIEN LOP "<<ng[i]<<":"<<endl;
        for(int  j=0 ; j<n;j++){
            if(ng[i].gnganh() == ds[j].gmasv() && ds[j].lop_lop() != "E") cout<<ds[j];
        }
    }
}