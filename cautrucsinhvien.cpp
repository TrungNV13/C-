#include<bits/stdc++.h>
struct SinhVien{
    std::string name;
    std::string classs;
    std::string date;
    double count;
};
void nhap(SinhVien &a){
    getline(std::cin,a.name);
    getline(std::cin,a.classs);
    getline(std::cin,a.date);
    std::cin>>a.count;
}
void in(SinhVien a){
    std::string delimiter ="/";
    size_t pos=0;
    std::string s[100];
    int n=0;
    while((pos=a.date.find(delimiter)) != std::string::npos){
        if(pos<2){
            s[n++]='0'+a.date.substr(0,pos);
        }
        else s[n++]=a.date.substr(0,pos);
        a.date.erase(0,pos+delimiter.length());
    }
    s[n++]=a.date;
    a.date.clear();
    for(int i=0;i<n;i++){
        if(i<n-1){
            a.date+=s[i]+'/';
        }
        else a.date+=s[i];
    }
    std::cout<<"B20DCCN001"<<" "<<a.name<<" "<<a.classs<<" "<<
    a.date<<" "<<std::fixed<<std::setprecision(2)<<a.count;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}