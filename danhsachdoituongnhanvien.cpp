#include<bits/stdc++.h>
using namespace std;
int i=1;
string stt(int i){
    string s=to_string(i);
    while(s.length() < 5 ){
        s = "0" + s;
    }
    return s;
}
class NhanVien{
    private:
    string name,gender,birth_day,address,code,sign_day;
    public:
    friend istream& operator >> (istream &in, NhanVien &a){
        cin.ignore();
        getline(in,a.name);
        in>>a.gender>>a.birth_day;
        cin.ignore();
        getline(in,a.address);
        cin>>a.code>>a.sign_day;
        return in;
    }
    friend ostream& operator << (ostream &out, NhanVien &a){
        return out<<stt(i++)<<" "<<a.name<<" "<<a.gender<<" "<<a.birth_day<<" "<<a.address<<" "<<
        a.code<<" "<<a.sign_day<<endl;
    }
};
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}