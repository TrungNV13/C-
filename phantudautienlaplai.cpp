#include<bits/stdc++.h>
int main(){ 
	int t; 
	std::cin>>t;
	while(t--){
   		int n,*a; 
  	 	std::cin>>n;
		a=new int[n];
		for(int i=0;i<n;i++) {
			std::cin>>a[i];
		}
	 	std::set<int>s;
	  	int u=0;
	   	for(int i=0;i<n;i++){
	    	s.insert(a[i]); 
			if(i-s.size()==0){ 
				u=i; 
				break; 
			}
	    } 
		if(s.size()==n) std::cout<<"-1"<<std::endl;
		else std::cout<<a[u]<<std::endl;
	} 
}
