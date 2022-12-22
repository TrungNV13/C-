#include<iostream>
#include<string>
#include<sstream>
int main(){
    int t;
    std::cin>>t;
    std::cin.ignore();
    while(t--){
        std::string s;
        getline(std::cin,s);
        std::stringstream token(s);
        std::string ss;
        int count=0;
        while( token>>ss ){
            count++;
        }
        std::cout<<count<<std::endl;
    }
}