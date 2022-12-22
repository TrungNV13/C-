#include<bits/stdc++.h>
using namespace std;
int i=1;
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
string check(int i){
    if(i<10){
        string s="00";
        s=s+to_string(i);
        return s;
    }
    else if(i>=10 && i<100){
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
        return os<<"B20DCCN"<<check(i++)<<" "<<normalize_name(a.name)<<" "<<a.clas<<" "<<normalize_date(a.date)<<" "<<
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
