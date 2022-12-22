#include<iostream>
#include<string>
using namespace std;
void Xoa_Khoang_Trang_Thua_Dau_Va_Cuoi(string &str){
	while (str[0] == ' '){
		str.erase(str.begin() + 0); 
	}
	while (str[str.length() - 1] == ' '){
		str.erase(str.begin() + str.length() - 1); 
	}
}
void Xoa_Khoang_Trang_Giua_Cac_Tu(string &str){
	for (int i = 0; i < str.length(); i++){
		if (str[i] == ' ' && str[i + 1] == ' '){
			str.erase(str.begin() + i);
			i--;
		}
	}
}
int main(){
    string s;
    getline(cin,s);
    int l=s.length();
    Xoa_Khoang_Trang_Thua_Dau_Va_Cuoi(s);
    Xoa_Khoang_Trang_Giua_Cac_Tu(s);
    for(int i=0;i<l;i++){
        if(s[i]>='A' && s[i]<='Z') s[i]+=32;
    }
    string s1[100];
    int n=0;
    string delimiter =" ";
    size_t pos =0;
    string token;
    while((pos= s.find(delimiter)) != std::string::npos){
        token=s.substr(0,pos);
        if(token != delimiter ){
        s1[n++] =token;
        }
        s.erase(0, pos + delimiter.length());
    }
    s1[n++]=s;
    for(int i=0;i<n-1;i++){
        cout<<s1[i][0];
    }
     cout<<s1[n-1];
    cout<<"@ptit.edu.vn";
}
