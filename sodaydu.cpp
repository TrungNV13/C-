#include<bits/stdc++.h>
using namespace std;
string check(string s,int a[],int b[]){
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z' || s[i] >='A' && s[i]<='Z'|| s[0] -'0'==0) return "INVALID";
        else if( s[i] -'0' >=0 && s[i]-'0'<= 9){
            for(int j=0;j<10;j++){
                if(s[i] -'0'== a[j]){
                    b[j]=1;
                    break;
                }
            }
        }
    }
    for(int i=0;i<10;i++){
        if(b[i]==0) return "NO";
    }
    return "YES";
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        int a[10]={0,1,2,3,4,5,6,7,8,9},b[10]={};
        cout<<check(s,a,b)<<endl; 
    }
}