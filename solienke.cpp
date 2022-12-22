#include<bits/stdc++.h>
using namespace std;
bool so_lien_ke(char s[20]){
    int l=strlen(s);
    for(int i=1;i<l;i++){
        if(s[i]-s[i-1]>1 || s[i]-s[i-1]<-1 || s[i]-s[i-1]==0  ) return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        getchar();
        char s[20];
        cin.getline(s,20);
        int l=strlen(s);
        if(so_lien_ke(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}