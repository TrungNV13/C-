#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string name,classs,date;
    double GPA;
};
int k=1;
string check(int i){
    string s;
    if(i<10)  s= "00" + to_string(i);
    else if( i>=10 && i<=99 ) s= "0" + to_string (i);
    else s=to_string(i);
    return s;
}
void nhap(SinhVien ds[], int N){
    for(int i=0;i<N;i++){
        if(k==1) cin.ignore();
        getline(cin,ds[i].name);
        cin>>ds[i].classs>>ds[i].date;
        cin>>ds[i].GPA;
    }
}
string date_name(string a){
    
}
string date_birth(string a){
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
void in(SinhVien ds[], int N){
    for(int i=0;i<N;i++){
        cout<<"B20DCCN"<<check(k++)<<" "<<ds[i].name<<" "<<ds[i].classs<<" "<<
        date_birth(ds[i].date)<<" "<<fixed<<setprecision(2)<<ds[i].GPA<<endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}