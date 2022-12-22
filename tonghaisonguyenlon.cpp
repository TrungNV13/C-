#include<bits/stdc++.h>
using namespace std;
void normalize(string &s1,string &s2){
    while(s1.length()>s2.length()) s2="0" +s2;
    while(s1.length()<s2.length()) s1="0" +s1;
}
void sum(string s1,string s2){
    int n=s1.length();
    string s;
    int temp=0;
    for(int i=n-1;i>=0;i--){
        int check=s1[i]-48+s2[i]-48+temp;
        if(check >=10) {
             s=to_string(check%10) + s;
             temp=1;
        }
        else {
            temp=0;
            s=to_string(check) +s;
        }
        
    }
    if(temp>0) s=to_string(temp) +s; 
    cout<<s<<endl;
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string x,y;
        cin>>x>>y;
        normalize(x,y);
        sum(x,y);
    }
}
