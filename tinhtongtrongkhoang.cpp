#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv){
    int t;
    cin>>t;
    while(t--){
        int n,Q;
        cin>>n>>Q;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        while(Q--){
            int L,R;
            cin>>L>>R;
            int dem=0;
            for(int i=L-1;i<R;i++){
                dem+=a[i];
            }
            cout<<dem<<endl;
        }
    }
}