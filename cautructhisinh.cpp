#include<bits/stdc++.h>
struct ThiSinh{
    std::string hoTen;
    std::string ngaySinh;
    float diem1;
    float diem2;
    float diem3;
};
void nhap(ThiSinh &a){
    getline(std::cin,a.hoTen);
    getline(std::cin,a.ngaySinh);
    std::cin>>a.diem1>>a.diem2>>a.diem3;
}
void in(ThiSinh a){
    std::cout<<a.hoTen<<" "<<a.ngaySinh<<" ";
    std::cout<<std::fixed<< std::setprecision(1)<<a.diem1+a.diem2+a.diem3;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}