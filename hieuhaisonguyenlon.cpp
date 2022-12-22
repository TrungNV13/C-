#include<bits/stdc++.h>
using namespace std;
void hieu(string s1,string s2){
    int n=s1.length();
    int r=0;
    int temp;
    string res;
    if(s1<s2){swap(s1,s2);}
    for(int i=n-1;i>=0;i--)
    {
        temp=s1[i]-s2[i]-r;
        if(temp<0){temp+=10;r=1;}
        else r=0;
        res=to_string(temp%10)+res;
    }
    cout<<res<<endl;
}
void chuanhoa(string &s1,string &s2){
    while(s1.length()>s2.length())s2="0"+s2;
    while(s1.length()<s2.length())s1="0"+s1;
}
main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        chuanhoa(s1,s2);
        hieu(s1,s2);
    }
}
