#include<bits/stdc++.h> 
using namespace std;
struct citizen{
    string ten,date;
    string temp;
};
void nhap(citizen &a){
    cin>>a.ten>>a.date;
    a.temp = a.date.substr(6,4) + a.date.substr(3,2) + a.date.substr(0,2);
}
bool cmp(citizen a, citizen b){
    return a.temp > b.temp;
}
int main(){
    int n;
    cin>>n;
    citizen *ds;
    ds = new citizen[n];
    for(int i=0;i<n;i++) nhap(ds[i]);
    sort(ds, ds + n, cmp);
    cout<<ds[0].ten<<endl<<ds[n-1].ten<<endl;
}
