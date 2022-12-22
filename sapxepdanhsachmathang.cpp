#include<bits/stdc++.h>
using namespace std;
struct mathang{
    int stt;
    string ten,nhom;
    double giamua,giaban;
};

void nhap(mathang &a){
    getline(cin,a.ten);
    getline(cin,a.nhom);
    cin>>a.giamua>>a.giaban;
    cin.ignore();
}
bool cmp(mathang a , mathang b){
    return (a.giaban - a.giamua) > (b.giaban - b.giamua);
}
void in(mathang a){
    cout<<a.stt<<" "<<a.ten<<" "<<a.nhom<<" "<<fixed<<setprecision(2)<<a.giaban-a.giamua;
}
int main(){
    int n;
    cin>>n;
    mathang *ds;
    ds=new mathang[n];
    cin.ignore();
    for(int i=0;i<n;i++){
        ds[i].stt=i+1;
        nhap(ds[i]);
    }
    sort(ds,ds+n,cmp);
    for(int i=0;i<n;i++){
        in(ds[i]);
        cout<<endl;
    }
}