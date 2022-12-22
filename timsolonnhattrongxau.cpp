#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s; 
        getline(cin,s);
        long long sum=0;
        for(int i=0;i<s.length();i++){
            if(s[i]-'0'>=0&& s[i]-'0'<=9){
                long long temp=0;
                for(int j=i;j<s.length();j++){
                    if(s[j]-'0'>=0 && s[j]-'0'<=9){
                        temp=temp*10 + (s[j]-'0');
                    }
                   else{
                       i=j;
                       break;
                   }
                }
                if(temp>sum) sum=temp;
            }
            else continue;
        }
        cout<<sum<<endl;
    }
}