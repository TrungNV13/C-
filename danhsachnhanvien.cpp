#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
    string name;
    string gender;
    string date;
    string address;
    string code;
    string date_contract;
};
int check =0;
void nhap(NhanVien &a){
    if(check ==0){
        cin.ignore();
        check++;
    }
    getline(cin,a.name);
    getline(cin,a.gender);
    getline(cin,a.date);
    getline(cin,a.address);
    getline(cin,a.code);
    getline(cin,a.date_contract);
}
void inds(NhanVien a[],int n){    
    for(int i=0;i<n;i++){
        if(i<9){
            cout<<"0000"<<i+1<<" ";
        }
        else cout<<"000"<<i+1<<" ";
        cout<<a[i].name<<" "<<a[i].gender<<" "
        <<a[i].date<<" "<<a[i].address<<" "<<a[i].code<<" "<<a[i].date_contract;
        cout<<endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
