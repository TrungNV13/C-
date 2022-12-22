#include<iostream>
#include<string>
int main(){
    int t;
    std::cin>>t;
    std::cin.ignore();
    while(t--){
        int count_even=0,count_odd=0;
        std::string str;
        getline(std::cin,str);
        int l=str.length();
        for(int i=0;i<l;i++){
            if(i%2==0) count_even+= str[i] -'0';
            else count_odd+=str[i] -'0';
        }
        // std::cout<<count_even<<" "<<count_odd<<std::endl;
        if((count_even-count_odd)%11==0) std::cout<<"1"<<std::endl;
        else std::cout<<"0"<<std::endl;
    }
}