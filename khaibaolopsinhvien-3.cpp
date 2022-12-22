#include<bits/stdc++.h>
using namespace std;
void nor(string &s){
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z') s[i]+=32;
    }
    s[0]=toupper(s[0]);
}
string normalize_name(string a){
    int i=1;
    stringstream ss(a);
    string s,s1;
    while(ss>>s){
        nor(s);
        if(i==1){
            s1=s1+s;
            i++;
        }
        else s1=s1+' '+s;
    }
    return s1;
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
class SinhVien{
    private:
        string name,class_,date;
        double GPA;
    public:
        friend istream& operator >> (istream &in, SinhVien &a){
            getline(in,a.name);
            getline(in,a.class_);
            getline(in,a.date);
            cin>>a.GPA;
            return in;
        }
        friend ostream& operator << (ostream &out, SinhVien &a){
            return out<<"B20DCCN001"<<" "<<normalize_name(a.name)<<" "<<a.class_<<" "<<
            normalize_date(a.date)<<" "<<fixed<<setprecision(2)<<a.GPA;
        }
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}