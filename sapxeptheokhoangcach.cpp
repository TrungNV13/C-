#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,*a;
        cin>>n>>x;
        a=new int[n];
        multimap <int,int> m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m.insert(make_pair(abs(x-a[i]),a[i]));
        }
        for(auto x:m){
            cout<<x.second<<" ";
        }
        cout<<endl;
    }
}