#include <iostream>
#include<string> 
int main(){ 
    int t;
    std::cin>>t;
    std::cin.ignore();
    while(t--){
        std::string str;
        getline(std::cin,str); 
        int k;
        std::cin>>k;
        int count=0;
        int l=str.length();
        int a[1000];
        if(l<26){
            std::cout<<"0";
        }
        else{
            for(int i='a';i<='z';i++){
                a[i]=1;
            }
            for(int i=0;i<l;i++){
                for(int j='a';j<='z';j++){
                    if(str[i]==j){
                        a[j]=0;
                    }
                }
            }
            for(int i='a';i<='z';i++){
                if(a[i]==1) count++;
            }
            if(count<=k){
                std::cout<<"1";
            }
            else std::cout<<"0";
        }
        std::cout<<std::endl;
        std::cin.ignore();
    }
}