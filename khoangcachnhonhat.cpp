#include<bits/stdc++.h>
using namespace std;
void sap_xep(int n,int a[]){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main(int argc, char** argv){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sap_xep(n,a);
        int dem=0;
        for(int i=0;i<n-1;i++){
             if(i==0){
                 dem=a[i]-a[i+1];
             }
             else{
                 if(a[i]-a[i+1]<dem) dem=a[i]-a[i+1];
             }
        }
        cout<<dem<<endl;
    }
}