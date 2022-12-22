#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sum(string s2){
    ll n=s2.length();
    ll sum =s2[0]-48;
    for(int i=1;i<n;i++){
       sum+=s2[i]-48;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        string s1="",s2="";
        for(int i=0;i<s.length();i++){
            if(s[i]-'0'>=0 && s[i]-'0'<=9) s2= s[i] + s2;
            else s1 = s[i] + s1;
        }
        sort(s1.begin(),s1.end());
        cout<<s1<<sum(s2)<<endl;
    }
}