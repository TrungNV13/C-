#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n){
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
}
int main(){
   
        int n,k,*a;
        cin>>n>>k;
        a=new int[n];
        int temp=1;
        for(int i=0;i<k;i++){
            a[i]=temp++;
        }
        output(a,k);
        cout<<endl;
        for( int i=k-1;i>=0;i--){
            if(a[i]<n-k+i+1){
                a[i]++;
                for(int j=i+1;j<k;j++){
                    a[j]=a[i]+j-i;
                }
                output(a,k);
                cout<<endl;
                i=k;
            }
        }

}