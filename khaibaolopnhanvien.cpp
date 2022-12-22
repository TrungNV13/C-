#include<bits/stdc++.h>
using namespace std;
class NhanVien{
    public:
        string name,gender,date_birth,address,code,date_sign;
    void nhap(){
        getline(cin,name);
        getline(cin,gender);
        getline(cin,date_birth);
        getline(cin,address);
        getline(cin,code);
        getline(cin,date_sign);
    }
    void xuat(){
        cout<<"00001"<<" "<<name<<" "<<gender<<" "<<date_birth<<" "
        <<address<<" "<<code<<" "<<date_sign;
    }
};
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}