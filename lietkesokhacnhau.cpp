#include<iostream>
#include<algorithm>
int main(){
    int n,*a,*b,*c;
    int count=0;
    std::cin>>n;
    a=new int[n];
    b=new int[n];
    c=new int[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        b[i]=1;
    }
    for(int i=0;i<n;i++){
        if(b[i]==1){
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    b[j]=0;
                }
            }
            c[count++]=a[i];
        }
    }
    std::sort(c,c+count);
    for(int i=0;i<count;i++){
        std::cout<<c[i]<<" ";
    }
}