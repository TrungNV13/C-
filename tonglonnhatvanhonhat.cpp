#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int p,q;
        int max=0,min=0;
        cin>>p>>q;
        if(p>q) {
            max=p;
            min=q;
        }
        else{
            max=q;
            min=p;
        }
        string s1,s2;
        string s3,s4;
        cin>>s1>>s2;
        ll first=0,second=0;
        for(auto i:s1){
            if(i - '0' == max) i=min;
            first = first*10 + (i - min);
        }
        for(auto i:s2){
            if(i - '0' == max) i=min;
            second = second*10 + (i );
        }
        cout<<first+second<<" ";
        first=0;second=0;
         for(auto i:s1){
            if(i - '0' == min) i=max;
            first = first*10 + (i - );
        }
        for(auto i:s2){
            if(i - '0' == min) i=max;
            second = second*10 + (i );
        }
         cout<<first+second<<endl;
    }
}
