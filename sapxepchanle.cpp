#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,*a;
        cin>>n;
        a=new int[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int k=n/2;
        sort(a,a+n);
        if(n%2==0) for(int i=0;i<n/2;i++) cout<<a[i]<<" " <<a[k++]<<" ";      
        else {
            int h=k++;
            for(int i=0;i<n/2;i++) cout<<a[i]<<" " <<a[k++]<<" "; 
            cout<<a[h];
        }
        cout<<endl;
    }
}