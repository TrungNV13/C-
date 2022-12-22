#include<iostream>
#include<string>
int main(){
    int t;
    std::cin>>t;
    std::cin.ignore();
    while(t--){
        std::string s;
        getline(std::cin,s);
        int l=s.length();
        int count=1;
        for(int i=0;i<l;i++){
            if(s[i]==s[i+1]){
                count++;
            }
            else if(s[i]!=s[i+1]){
                std::cout<<s[i]<<count;
                count=1;
            }
        }
        std::cout<<std::endl;
    }
}