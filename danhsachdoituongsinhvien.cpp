#include<bits/stdc++.h>
using namespace std;
int i=1;
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
string check(int i){
    if(i<10){
        string s="0";
        s=s+to_string(i);
        return s;
    }
    else return to_string(i);
}
class SinhVien{
    public:
    string name,clas,date;
    double GPA;
    friend istream& operator >> (istream &is, SinhVien &a){
        if(i==1)cin.ignore();
        getline(is,a.name);
        getline(is,a.clas);
        getline(is,a.date);
        is>>a.GPA;
        return is;
    }
    friend ostream& operator << (ostream &os, SinhVien &a){
        return os<<"B20DCCN0"<<check(i++)<<" "<<a.name<<" "<<a.clas<<" "<<normalize(a.date)<<" "<<
        fixed << setprecision(2) << a.GPA<<endl;
    }
};
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
