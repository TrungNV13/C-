#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
    string name,gender,date_birth,address,code,date_sign;
    string normalize_date;
    string stt;
};
int k=1;
// void stt(int k, NhanVien &a){
//     string s=to_string(k);
//     while(s.length()<5){
//         s="0" + s;
//     }
//     a.stt=s;
// }
void nhap(NhanVien &a ){
    cin.ignore();
    // stt(k,a);
    getline(cin,a.name);
    cin>>a.gender>>a.date_birth;
    cin.ignore();
    getline(cin,a.address);
    cin>>a.code>>a.date_sign;
    if(k<=9)a.stt="0000"+to_string(k);
    else a.stt="000"+to_string(k);
    k++;
}
// bool cmp(NhanVien a, NhanVien b){
//     return a.normalize_date < b.normalize_date;
// }
bool cmp(struct NhanVien a, struct NhanVien b)
{
    string s1,s2;
    s1=a.date_birth.substr(6,4);
    s2=b.date_birth.substr(6,4);
    //cout<<s1<< " "<<s2<<" ";
    if(s1!=s2)return s1<s2;
     s1=a.date_birth.substr(0,2);
    s2=b.date_birth.substr(0,2);
     if(s1!=s2)return s1<s2;

    s1=a.date_birth.substr(3,2);
    s2=b.date_birth.substr(3,2);
    if(s1!=s2)return s1<s2;

}
void sapxep(NhanVien ds[], int N){
    // for(int i=0;i<N;i++){
    //     string res="/",s=ds[i].date_birth;
    //     size_t pos=0;
    //     while( (pos=s.find(res)) != string::npos){
    //         ds[i].normalize_date = s.substr(0,pos) + ds[i].normalize_date;
    //         s.erase(0,pos + res.length());
    //     }
    //     ds[i].normalize_date = s + ds[i].normalize_date;
    // }
    sort(ds, ds + N, cmp);
}
void inds(NhanVien ds[], int N){
    for(int i=0;i<N;i++){
         cout<<ds[i].stt<<" "<<ds[i].name<<" "<<ds[i].gender<<" "<<ds[i].date_birth<<" "<<
         ds[i].address<<" "<<ds[i].code<<" "<<ds[i].date_sign<<endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}