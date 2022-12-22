#include<bits/stdc++.h>
using namespace std;
struct thoigian{
    int gio,phut,giay;
    long long sum;
};
void nhap(thoigian t[],int n){
    for(int i=0;i<n;i++){
       cin>>t[i].gio>>t[i].phut>>t[i].giay;
       t[i].sum=t[i].gio*3600+t[i].phut*60+t[i].giay;
    }
}
bool cmp(thoigian a, thoigian b){
    return a.sum<b.sum;
}
void in(thoigian t[],int n){
    for(int i=0;i<n;i++){
        cout<<t[i].gio<<" "<<t[i].phut<<" "<<t[i].giay<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    thoigian *t;
    t=new thoigian[n];
    nhap(t,n);
    sort(t,t+n,cmp);
    in(t,n);
}