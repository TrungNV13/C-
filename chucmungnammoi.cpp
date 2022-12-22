#include<iostream>
#include<string>
#include<set>
int main(){
    int n,*a;
    std::cin>>n;
    a=new int[n];
    std::string s[10000];
    std::cin.ignore();
    for(int i=0;i<n;i++){
        getline(std::cin,s[i]);
        a[i]=1;
    }
    for(int i=0;i<n;i++){
        if(a[i]==1){
            for(int j=i+1;j<n;j++){
                if(s[i]==s[j]) a[j]=0;
            }
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==1) count++;
    }
    std::cout<<count;
}