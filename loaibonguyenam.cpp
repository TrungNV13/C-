#include<iostream>
#include<string>
int main(){
    std::string s;
    getline(std::cin,s);
    std::string a="aeiouy";
    int l=s.length();
    for(int i=0;i<l;i++){
        if(s[i]>='A' && s[i]<='Z') s[i]+=32;
    }
    for(int i=0;i<l;i++){
        int count=0;
        for(int j=0;j<6;j++){
            if(s[i] == a[j]){
                count++;
                break;
            }
        }
        if(count==0) std::cout<<"."<<s[i];
    }
}