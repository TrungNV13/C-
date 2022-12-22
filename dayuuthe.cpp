#include<iostream>
#include<string>
#include<sstream>
bool even_dominance_sequence(std::string &str){
    int count_even=0;
    int count_odd=0;
    int count=0;
    std::stringstream token(str);
    std::string s;
    int n=0;
    while( token>>s){
        if((s[s.length()-1] - '0') % 2==0) count_even++;
        else count_odd++;
        count++;
    }
    if(count%2==0 && count_even>count_odd) return true;
    else return false;
}
bool odd_dominance_sequence(std::string &str){
    int count_even=0;
    int count_odd=0;
    int count=0;
    std::stringstream token(str);
    std::string s;
    while( token>>s){
        if((s[s.length()-1] - '0')%2==0) count_even++;
        else count_odd++;
        count++;
    }
    if(count%2!=0 && count_even<count_odd) return true;
    else return false;
}
int main(){
    int t;
    std::cin>>t;
    std::cin.ignore();
    while(t--){
        std::string str;
        getline(std::cin,str);
        if(even_dominance_sequence(str) || odd_dominance_sequence(str)) std::cout<<"YES"<<std::endl;
        else std::cout<<"NO"<<std::endl;
    }
}