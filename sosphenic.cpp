#include<bits/stdc++.h>
int main(){
    int t;
    std::cin>>t;
    while(t--){
        int n,count=0;
        int check=0;
        std::cin>>n;
        int count_2=0;
        while(n%2==0){
            n/=2;
            count++;
            count_2++;
        }
        if(count_2>1) check=1;
        for(int i=3;i<=sqrt(n);i+=2){
            int temp=0;
            while(n%i==0){
                n/=i;
                count++;
                temp++;
            }
            if(temp>1) check=1;
        }
        if(n>1) count++;
        if(count==3 && check ==0) std::cout<<"1"<<std::endl;
        else std::cout<<"0"<<std::endl;
    }
}