#include<bits/stdc++.h>
struct NhanVien{
    std::string  name ;
    std::string gender;
    std::string date;
    std::string address;
    std::string code;
    std::string date_contract;
};
void nhap(NhanVien &a){
    getline(std::cin,a.name);
    getline(std::cin,a.gender);
    getline(std::cin,a.date);
    getline(std::cin,a.address);
    getline(std::cin,a.code);
    getline(std::cin,a.date_contract);
}
void in(NhanVien a){    
    std::cout<<"00001"<<" "<<a.name<<" "<<a.gender<<" "
    <<a.date<<" "<<a.address<<" "<<a.code<<" "<<a.date_contract;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}