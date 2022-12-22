#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,*a,*b;
        cin>>n;
        a=new int[n];
        b=new int[n];
        for(int i=0;i<n-1;i++){
            cin>>a[i];
        }
        int k=n-1;
        sort(a,a+k);
        int temp=0;
        for(int i=n-2;i>0;i--) {
            if(a[i]-a[i-1]>1){
                b[temp++]=a[i-1] +1;
            }     
        }
        sort(b,b+temp);
        cout<<b[0]<<endl;
    }
}