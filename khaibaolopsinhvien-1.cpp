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
        string id,name,class_,date;
        float point;
    
    void nhap(){
        getline(cin,name);
        getline(cin,class_);
        getline(cin,date);
        cin>>point;
    }
    void xuat(){
        cout<<"B20DCCN001"<<" "<<name<<" " <<class_<<" "<<normalize(date)<<" "<<fixed<<setprecision(2)<<point;
    }
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}

