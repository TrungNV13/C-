#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin>>t;
    getchar();
    while(t--){
        char s[20];
        cin.getline(s,20);
        int l=strlen(s);
        for(int i=0;i<l;i++){
            s[i]-='0';
        }
        for(int i=0;i<l;i++){
            if(s[i]==0 && s[i+1]==8 && s[i+2]==4){
                for(int j=i+3;j<l;j++){
                    cout<<(int)s[j];
                }
                break;
            }
            else cout<<(int)s[i];
        }
        cout<<endl;
    }
}