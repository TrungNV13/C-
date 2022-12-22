#include<bits/stdc++.h>
using namespace std;
void convert(string &str){
    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z') str[i]-=32;
    }
}
int main(){
    string s;
    getline (cin ,s);
    int ls1=s.length();
    for(int i=0;i<ls1;i++){
        if(s[i]>='A' && s[i]<='Z') s[i]+=32;
    }
    string s1[100],token;
    int n=0;
    stringstream ss(s);
    while(ss>>token){
        s1[n++]=token;
    }
    for(int i=0;i<n;i++){
        if(i==n-1){
            convert(s1[i]);
            cout<<s1[i]<<" ";
        }
        else if(i==n-2){
            s1[i][0]=toupper(s1[i][0]);
            cout<<s1[i]<<", ";
        }
        else {
            s1[i][0]=toupper(s1[i][0]);
            cout<<s1[i]<<" ";
        }
    }
}