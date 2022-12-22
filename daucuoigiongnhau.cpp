#include<iostream>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
        string s1;
		cin>>s1;
		int ls1=s1.length();
		int count=0;
		for(int i=0;i<ls1;i++){
			for(int j=i;j<ls1;j++){
				if(s1[i]==s1[j]) count++;
			}
		}
		cout<<count<<endl;
	}
}
