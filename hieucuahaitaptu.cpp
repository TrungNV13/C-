#include<iostream>
#include<string>
void Xoa_Khoang_Trang_Thua_Dau_Va_Cuoi(std::string &str){
	while (str[0] == ' '){
		str.erase(str.begin() + 0); 
	}
	while (str[str.length() - 1] == ' '){
		str.erase(str.begin() + str.length() - 1); 
	}
}
void Xoa_Khoang_Trang_Giua_Cac_Tu(std::string &str){
	for (int i = 0; i < str.length(); i++){
		if (str[i] == ' ' && str[i + 1] == ' '){
			str.erase(str.begin() + i);
			i--;
		}
	}
}
int main(){
    int t;
    std::cin>>t;
    std::cin.ignore();
    while(t--){
        std::string s1,s2;
        getline(std::cin,s1);
        getline(std::cin,s2);
        std::string ls1[100],ls2[100];
        int n=0,m=0;
        Xoa_Khoang_Trang_Thua_Dau_Va_Cuoi(s1);
        Xoa_Khoang_Trang_Thua_Dau_Va_Cuoi(s2);
        Xoa_Khoang_Trang_Giua_Cac_Tu(s1);
        Xoa_Khoang_Trang_Giua_Cac_Tu(s2);
        std::string delimiter=" ";
        size_t pos=0;
        std::string token;
        while ( (pos=s1.find(delimiter)) != std::string::npos){
            ls1[n++]=s1.substr(0,pos);
            s1.erase(0, pos + delimiter.length());
        }
        ls1[n++]=s1;
        while ( (pos=s2.find(delimiter)) != std::string::npos){
            ls2[m++]=s2.substr(0,pos);
            s2.erase(0, pos + delimiter.length());
        }
        ls2[m++]=s2;
        std::string s3[100];
        int k=0;
        for(int i=0;i<n;i++){ 
            int count=0;
            for(int j=0;j<i;j++){
                if(ls1[i]==ls1[j]) count++;
            }
            for(int j=0;j<m;j++){
                if(ls1[i]==ls2[j]) count++;
            }
            if(count ==0){
                s3[k++]=ls1[i];
            }
        }
        for(int i=0;i<k;i++){
            for(int j=i+1;j<k;j++){
                if(s3[i]>s3[j]){
                    std::string temp=s3[i];
                    s3[i]=s3[j];
                    s3[j]=temp;
                }
            }
        }
        for(int i=0;i<k;i++){
            std::cout<<s3[i]<<" ";
        }
        std::cout<<std::endl;
    }
}