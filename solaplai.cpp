#include<iostream>
#include<algorithm>
int main(){
    int t;
    std::cin >> t;
    while(t--){
        long long a,x,y;
        std::cin >> a >> x >> y;
        long long s = std::__gcd(x,y);
        for (int i = 0; i < s ; i++){
             std::cout << a; 
        } 
        std::cout <<std::endl;
    }
}