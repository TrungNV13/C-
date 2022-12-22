#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    stringstream ss(s1);
    string token;
    while(ss>>token){
        if(token==s2) continue;
        else cout<<token<<" ";
    }
}