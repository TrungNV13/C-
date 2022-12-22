#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,*a,*b;
        set<int> Union,Intersection;
        cin>>n>>m;
        a=new int[n]; 
        b=new int[m];
        for(int i=0;i<n;i++){
            cin>>a[i];
            Union.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            Union.insert(b[i]);
            for(int j=0;j<n;j++){
                if(b[i]==a[j]){
                    Intersection.insert(b[i]);
                    break;
                }
            }
        }
        for(auto x:Union){
            cout<<x<<" ";
        }
        cout<<endl;
        for(auto y:Intersection){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}