#include<bits/stdc++.h>
using namespace std;
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
    string res="E";
    SinhVien *ds;
    ds= new SinhVien[n];
    for(int i=0;i<n;i++) cin>>ds[i];
    int q;
    cin>>q;
}

