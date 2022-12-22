#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[1000];
        set<int>s;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int k1=a[0],k2=a[n-1];
        for(int i=0;i<n;i++){
            s.insert(a[i]);
        }
        int dem=0;
        for(int x:s) dem++;
        cout<<k2-k1-dem+1<<endl;
    }
}