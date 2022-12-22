#include<bits/stdc++.h>
using namespace std;
int i=1;
string check(int i){
    string s=to_string(i);
    while(s.length() < 5 ){
        s = "0" + s;
    }
    return s;
}
class NhanVien{
    private:
    string name,gender,birth_day,address,code,sign_day,stt;
    public:
    void sapxep(NhanVien ds[], int N){

    }
    friend istream& operator >> (istream &in, NhanVien &a){
        a.stt=check(i);i++;
        cin.ignore();
        getline(in,a.name);
        in>>a.gender>>a.birth_day;
        cin.ignore();
        getline(in,a.address);
        cin>>a.code>>a.sign_day;
        return in;
    }
    string date(){
        return birth_day;
    }
    friend ostream& operator << (ostream &out, NhanVien &a){
        return out<<a.stt<<" "<<a.name<<" "<<a.gender<<" "<<a.birth_day<<" "<<a.address<<" "<<
        a.code<<" "<<a.sign_day<<endl;
    }
};
bool cmp(NhanVien a, NhanVien b){
    string s1= a.date().substr(6,4) + a.date().substr(0,2) + a.date().substr(3,2);
    string s2= b.date().substr(6,4) + b.date().substr(0,2) + b.date().substr(3,2);
    return s1 < s2;
}
void sapxep(NhanVien ds[], int N){
    sort(ds, ds + N , cmp);
    }
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}