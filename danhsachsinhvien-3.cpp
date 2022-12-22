// #include<bits/stdc++.h>
// using namespace std;
// struct SinhVien{
//     string name,classs,date;
//     double GPA;
// };
// int k=1;
// string check(int i){
//     string s;
//     if(i<10)  s= "00" + to_string(i);
//     else if( i>=10 && i<=99 ) s= "0" + to_string (i);
//     else s=to_string(i);
//     return s;
// }
// void nhap(SinhVien ds[], int N){
//     for(int i=0;i<N;i++){
//         if(k==1) cin.ignore();
//         getline(cin,ds[i].name,'\n');
//         cin>>ds[i].classs>>ds[i].date;
//         cin>>ds[i].GPA;
//     }
// }
// void nor(string &s){
//     for(int i=0;i<s.length();i++){
//         if(s[i]>='A' && s[i]<='Z') s[i]+=32;
//     }
//     s[0]=toupper(s[0]);
// }
// bool cmp(SinhVien a, SinhVien b){
//     return a.GPA > b.GPA;
// }
// string date_name(string a){
    // int i=1;
    // stringstream ss(a);
    // string s,s1;
    // while(ss>>s){
    //     nor(s);
    //     if(i==1){
    //         s1=s1+s;
    //         i++;
    //     }
    //     else s1=s1+' '+s;
    // }
    // return s1;
// }
// string date_birth(string a){
//     string s,res="/";
//     size_t pos=0;
//     while( ( pos=a.find(res) ) != string::npos){
//         if(pos<2){
//             s= s+ '0'+ a.substr(0,pos) + '/';
//         }
//         else s= s+ a.substr(0,pos) + '/';
//         a.erase(0,pos+res.length());
//     }
//     s=s+a;
//     return s;
// }
// void sapxep(SinhVien ds[], int N){
//     sort (ds,ds+N,cmp);
// }
// void in(SinhVien ds[], int N){
//     for(int i=0;i<N;i++){
//         cout<<"B20DCCN"<<check(k++)<<" "<<date_name(ds[i].name)<<" "<<ds[i].classs<<" "<<
//         date_birth(ds[i].date)<<" "<<fixed<<setprecision(2)<<ds[i].GPA<<endl;
//     }
// }
// int main(){
//     struct SinhVien ds[50];
//     int N;
//     cin >> N;
//     nhap(ds, N);
//     sapxep(ds,N);
//     in(ds, N);
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string msv="B20DCCN";
    string ten,lop,ngaysinh;
    double gpa;
};
void chuanhoa(string &a)
{
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
     a.clear();
     a=s;
}
void nor(string &s){
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z') s[i]+=32;
    }
    s[0]=toupper(s[0]);
}
string chuanhoaten(string &a)
{
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
void nhap(struct SinhVien ds[],int N)
{
    for(int i=1;i<=N;i++)
    {
    cin.ignore();
    getline(cin,ds[i].ten,'\n');
    ds[i].ten=chuanhoaten(ds[i].ten);
    cin>>ds[i].lop>>ds[i].ngaysinh>>ds[i].gpa;
    chuanhoa(ds[i].ngaysinh);
    if(i<=9)ds[i].msv=ds[i].msv+"00"+to_string(i);
    else ds[i].msv=ds[i].msv+"0"+to_string(i);
    }
}
void in(struct SinhVien ds[], int N)
{
    for(int i=1;i<=N;i++)
    {
        cout<<ds[i].msv<<" "<<ds[i].ten<<" "<<ds[i].lop<<" "<<ds[i].ngaysinh<<" "<<fixed<<setprecision(2)<<ds[i].gpa;
        cout<<endl;
    }
}
bool cmp(struct SinhVien a,struct SinhVien b)
{return a.gpa>b.gpa;}
void sapxep(struct SinhVien ds[], int N)
{
    sort(ds+1,ds+N+1,cmp);
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}