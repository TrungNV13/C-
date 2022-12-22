#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string name,classs,date;
    double count;
};
void nhapThongTinSV(struct SinhVien &a){
    getline(cin,a.name);
    cin>>a.classs>>a.date>>a.count;
}
string normalize_date(string a){
    string s,res="/";
    size_t pos=0;
    while( ( pos=a.find(res) ) != string::npos){
        if(pos<2){
            s= s+ '0'+ a.substr(0,pos) + '/';
        }
        else s= s+ a.substr(0,pos) + '/';
        a.erase(0,pos+res.length());
    }
    s=s+a;
    return s;
}
void inThongTinSV( struct SinhVien a){
    cout<<"N20DCCN001"<<" "<<a.name<<" "<<a.classs<<" "<<
    normalize_date(a.date)<<" "<<fixed<<setprecision(2)<<a.count;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}