#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n){
    for(int i=0;i<n;i++) cout<<a[i];
    cout<<" ";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,*a,m=1;
        cin>>n; 
        a=new int[n];
        for(int i=0;i<n;i++){
            a[i]=m++;
        }
        output(a,n);
        for(int i=n-2;i>=0;i--){
            int check,k;
            if(a[i]<a[i+1]){
                for(int j=i+1;j<n;j++){
                    int temp=0;
                    if(a[j]>a[i]){
                        if(temp==0){
                            check=a[j];
                            k=j;
                            temp++;
                        }
                        else{
                            if(check<a[j]){
                                check=a[j];
                                k=j;
                            }
                        }
                    }
                }
                check =a[i];
                a[i]=a[k];
                a[k]=check;
                int l=i+1,r=n-1;
                while(l<r){
                   int test=a[l];
                    a[l]=a[r];
                    a[r]=test;
                    l++;r--;
                }
                output(a,n);
                i=n-1;
            }
        }
        cout<<endl;
    }
}