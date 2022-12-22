#include<bits/stdc++.h>
using namespace std;
int max_length(int a[],int b[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        int sum1=0,sum2=0;
        for(int j=i;j<n;j++){
            sum1+=a[j];
            sum2+=b[j];
            if(sum1==sum2) {
                int length=j-i+1;
                if(length>max) max=length;
            }
        }
    }
    return max;
}
void nhap(int a[],int n){
    for(int i=0;i<n;i++) cin>>a[i];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,*a,*b;
        cin>>n;
        a=new int[n]; 
        b=new int[n];
        nhap(a,n);
        nhap(b,n);
        cout<<max_length(a,b,n)<<endl;
    }
}