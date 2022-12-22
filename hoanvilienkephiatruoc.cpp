#include<iostream>
int main(){
    int t;
    std::cin>>t;
    while(t--){
        int n,*a;
        std::cin>>n;
        a=new int[n];
        for(int i=0;i<n;i++){
            std::cin>>a[i];
        }
        int temp=0;
        for(int i=n-1;i>=0;i--){
            if(a[i]<a[i-1]){
                temp=i-1;
                break;
            }
        }
        for(int i=temp+1;i<(n+temp)/2;i++){
            int k=a[i];
            a[i]=a[n-i+temp];
            a[n-i+temp]=k;
        }
        for(int i=temp+1;i<n;i++){
            if(a[temp]>a[i]) {
                int k=a[temp];
                a[temp]=a[i];
                a[i]=k;
                break;
            }
        }
        for(int i=0;i<n;i++){
            std::cout<<a[i]<<" ";
        }
        std::cout<<std::endl;
    }
}