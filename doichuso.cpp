#include<bits/stdc++.h>
using namespace std; 
int main() { 
    int t; 
    cin>>t; 
    while(t--){ 
        string s; 
        int check=-1; 
        cin>>s; 
        for(int i=s.length()-1; i>0; i--){ 
            if( s[i] >= s[i-1] ) continue; 
            else{
                int max=s[i]; 
                int u=i; 
                for(int j=i+1; j<s.length(); j++){ 
                    if(s[j]>max && s[j]<s[i-1]) {
                        max=s[j]; 
                        u=j;
                    } 
                } 
                int temp=s[u]; 
                s[u]=s[i-1]; 
                s[i-1]=temp; 
                check=0; 
                break; 
            } 
        } 
        if(check==-1) cout<<"-1"<<endl; 
        else if(s[0]=='0'){ 
            for(int i=1; i<s.size(); i++) cout<<s[i]; 
            cout<<endl;
        } 
        else cout<<s<<endl; 
    } 
}