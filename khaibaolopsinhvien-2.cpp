#include<bits/stdc++.h>
using namespace std;
string normalize(string a){
    std::string delimiter ="/";
    size_t pos=0;
    std::string s[100];
    int n=0;
    while((pos=a.find(delimiter)) != string::npos){
        if(pos<2){
            s[n++]='0'+a.substr(0,pos);
        }
        else s[n++]=a.substr(0,pos);
        a.erase(0,pos+delimiter.length());
    }
    s[n++]=a;
    a.clear();
    for(int i=0;i<n;i++){
        if(i<n-1){
            a+=s[i]+'/';
        }
        else a+=s[i];
    }
    return a;
}
class SinhVien{
    public:
    string name,clas,date;
    double GPA;
    friend istream& operator >> (istream &is, SinhVien &a){
        getline(is,a.name);
        getline(is,a.clas);
        getline(is,a.date);
        is>>a.GPA;
        return is;
    }
    friend ostream& operator << (ostream &os, SinhVien &a){
        return os<<"B20DCCN001"<<" "<<a.name<<" "<<a.clas<<" "<<normalize(a.date)<<" "<<
        fixed<<setprecision(2)<<a.GPA;
    }
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}