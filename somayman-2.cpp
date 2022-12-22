#include<bits/stdc++.h>
using namespace std;
int tong(string s){   
    int sum=0;
    for(int i=0;i<s.length();i++){
        sum+=s[i]-48;
    }
    return sum;
}
int check(int &sum){
    int temp=0;
    while(sum){
        temp+= sum%10;
        sum/=10;
    }
    return temp;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sum=tong(s);
        while(sum>9){
            sum=check(sum);
        }
        if(sum==9) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
}