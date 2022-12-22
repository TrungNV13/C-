#include<bits/stdc++.h>
int main(){
    int t;
    std::cin>>t;
    std::cin.ignore();
    while(t--){
        std::string s;
        getline(std::cin,s);
        int sum=0;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z') continue;
            else {
                int temp=0;
                for(int j=i;j<s.length();j++){
                    if(s[j]>='a' && s[j]<='z'){
                        i=j;
                        break;
                    }
                    else {
                        temp=temp*10 +(s[j]-'0');
                        i=j;
                    }
                }
                sum+=temp;
            }
        }
        std::cout<<sum<<std::endl;
    }
}