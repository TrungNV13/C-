#include<bits/stdc++.h>
using namespace std;
bool tang(string s){
    for(int i=6;i<s.length();i++){
        if(i==8) continue;
        if(i==9){
            if(s[i]-s[i-2]!=1) return false;
        }
        else{
            if(s[i]-s[i-1]!=1) return false;
        }
    }
    return true;
}
bool bang(string s){
    for(int i=6;i<s.length();i++){
        if(i==8) continue;
        if(s[i]!=s[5]) return false;
    }
    return true;
}
bool bang1(string s){
    for(int i=6;i<8;i++){
        if(s[i]!=s[5]) return false;
    }
    if(s[9]!=s[10]) return false;
    return true;
}
bool locphat(string s){
    int k=0;
    for(int i=5;i<s.length();i++){
        if(i==8) continue;
        if(s[i]-48==6 || s[i]-48==8 ) continue;
        else k=1;
    }
    if(k==1) return false;
    else return true;
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        if(tang(s) || bang(s) || bang1(s) || locphat(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}