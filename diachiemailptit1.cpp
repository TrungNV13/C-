#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int l=s.length();
    for(int i=0;i<l;i++){
        if(s[i]>='A' && s[i]<='Z') s[i]+=32;
    }
    stringstream ss(s);
    string token,s1[100];
    int t=0;
    while(ss>>token){
        s1[t++]=token;
    }
    cout<<s1[t-1];
    for(int i=0;i<t-1;i++) cout<<s1[i][0];
    cout<<"@ptit.edu.vn";
}
