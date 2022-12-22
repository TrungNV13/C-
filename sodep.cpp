#include<iostream>
#include<string>
bool chan(std::string &str){
	int n=str.length();
	for(int i=0;i<n;i++){
		if(((int) str[i])%2!=0) return false;
	}
	return true;
}
bool  thuan_nghich(std::string &str){
	int n=str.length();
	for(int i=n-1;i>=(n/2);i--){
		if((int) str[i]!=(int )str[n-i-1]) return false;
	}
	return true;
}
int main(){
	int t;
	std::cin>>t;
	std::cin.ignore();
	while(t--){
	std::string str;
	getline(std::cin,str);
	if( chan(str) && thuan_nghich( str)) std::cout<<"YES"<<std::endl;
	else std::cout<<"NO"<<std::endl;
 }
}
