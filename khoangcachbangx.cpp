#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,X,*a,check=0;
        cin>>n>>X;
        a=new int[n];
        map<int,int> s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s[abs(X-a[i])]++;
        }
        for(int i=0;i<n;i++){
            if(s[a[i]]>=1){
                check++;
                cout<<"1"<<endl;
                break;
            }
        }
        if (check==0) cout<<"-1"<<endl;
    }
}