#include<iostream>
#include<string>
#include<ctype.h>
void normalize(std::string &str){
    while(str[0] == ' '){
        str.erase(str.begin()+0);
    }
    while(str[str.length()-1] == ' '){
        str.erase(str.begin()  + str.length() -1 );
    }
    for(int i=0 ; i < str.length() ; i++){
        if(str[i]>='A' && str[i] <= 'Z') str[i]+=32;
        if(str[i]==' ' && str[i+1]==' '){
            str.erase(str.begin() +i);
            i--;
        }
    }
}
void normalize_1(std::string &str){
    std::string delimiter=" ";
    std::string s[100];
    int n=0;
    size_t pos=0;
    while((pos=str.find(delimiter)) != std::string::npos){
        s[n++]=str.substr(0 , pos);
        s[n-1][0]=toupper(s[n-1][0]);
        str.erase(0, pos + delimiter.length());
    }
    s[n++]=str;
    s[n-1][0]=toupper(s[n-1][0]);
    std::cout<<s[n-1]<<" ";
    for(int i=0;i<n-1;i++){
        std::cout<<s[i]<<" ";
    }
}
void normalize_2(std::string &str){
    std::string delimiter=" ";
    std::string s[100];
    int n=0;
    size_t pos=0;
    while((pos=str.find(delimiter)) != std::string::npos){
        s[n++]=str.substr(0 , pos);
        s[n-1][0]=toupper(s[n-1][0]);
        str.erase(0, pos + delimiter.length());
    }
    s[n++]=str;
    s[n-1][0]=toupper(s[n-1][0]);
    for(int i=1;i<n;i++){
        std::cout<<s[i]<<" ";
    }
    std::cout<<s[0];
}
int main(){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::cin.ignore();
        std::string s;
        getline(std::cin,s);
        normalize(s);
        if(n==1) normalize_1(s);
        else if(n==2) normalize_2(s);
        std::cout<<std::endl;
    }
}